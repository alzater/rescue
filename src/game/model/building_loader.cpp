#include "building_loader.h"

#include "building.h"

BuildingLoader::BuildingLoader(const std::string& fileName)
    : _fileName(fileName)
{}

std::unique_ptr<Building> BuildingLoader::loadBuilding()
{
    std::ifstream file(_fileName);
    if( !file )
        return nullptr; // TODO

    int maxSize, nFloors;
    file >> maxSize >> nFloors;

    std::unique_ptr<Building> building( new Building(maxSize) );

    for( int i = 0; i < nFloors; ++i )
        building->addFloor( loadFloor(file) );

    return std::move(building);
}

Floor BuildingLoader::loadFloor(std::ifstream& file)
{
    int width, height, anchor, nFlats;
    file >> width >> height >> anchor >> nFlats;

    Floor floor( std::make_pair(width, height), anchor );

    for( int i = 0; i < nFlats; ++i )
        floor.addFlat( loadFlat(file) );

    return floor;
}

Flat BuildingLoader::loadFlat(std::ifstream& file)
{
    std::string sType;
    std::pair<int, int> position, size;
    int men;

    file >> sType >> position.first >> position.second >> size.first >> size.second >> men;

    Flat::FlatType type = getFlatType( sType );

    return Flat(position, size, men, type);
}

Flat::FlatType BuildingLoader::getFlatType(const std::string& sType)
{
    if( sType == "WINDOW" )
        return Flat::FlatType::WINDOW;

    return Flat::FlatType::WINDOW;
}
