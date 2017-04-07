// building.cpp

Building::Building()
{}

void Building::addFloor( Floor&& floor )
{
    _floors.emplace_back(floor);
}

const std::vector<Floor>& getFloors() const
{
    return _floors;
}
