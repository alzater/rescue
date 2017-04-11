#ifndef BUILDING_LOADER_H
#define BUILDING_LOADER_H

#include "flat.h"

#include <string>
#include <memory>
#include <fstream>

class Building;
class Floor;

class BuildingLoader
{
    public:
        BuildingLoader(const std::string& fileName);

        std::unique_ptr<Building> loadBuilding();

    private:
        Floor loadFloor(std::ifstream& file);
        Flat loadFlat(std::ifstream& file);

        Flat::FlatType getFlatType(const std::string& sType);

    private:
        const std::string _fileName;
};

#endif // BUILDING_LOADER_H
