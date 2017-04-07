Building::Building()
{}

void Building::addFloor( Floor&& floor )
{
    _floors.emplace_back(floor);

    if( _isEmpty && _floors.back().hasMen() )
        _isEmpty = false;
}

const std::vector<Floor>& Building::getFloors() const
{
    return _floors;
}

bool Building::hasMen()
{
    if( _isEmpty )
        return false;

    for( const auto& floor : _floors )
        if( floor.hasMen() )
            return true;

    _isEmpty = true;
    return False;
}

