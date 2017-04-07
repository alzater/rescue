#include "floor.h"

Floor::Floor(std::pair<int, int> size, int _anchor)
    : _size(size)
    , _anchor(anchor)
{}

Floor::Floor(Floor&& other)
    : _size(other._size)
    , _anchor(other._anchor)
    , _flats(std::move(other._flats))
{}

bool Flat::addFlat(const Flat& flat)
{
    int position = flat.getPosition().first;
    int size = flat.getSize().first;

    int i = 0;
    while( i < _flats.size() && _flats[i].getPosition().first < position)
        ++i;

    if( i == 0 )
    {
        if( position - size/2-1 < 0 )
            return false;
    }
    else
    {
        int prevPos = _flats[i-1].getPosition().first;
        int prevSize = _flats[i-1].getSize().first;

        if( prevPos + prevSize/2 + 5 > position - size/2 )
            return false;
    }

    if( i == _flats.size() )
    {
        if( position + size/2+1 > _size.first )
            return false;
    }
    else
    {
        int nextPos = _flats[i].getPosition().first;
        int nextSize = _flats[i].getSize().first;

        if( nextPos - nextSize/2 - 5 > position + size/2 )
            return false;
    }

    _flats.emplace(i, flat);

    return true;
}

int Floor::getHeight() const
{
    return _size.second;
}

int Floor::getWidth() const
{
    return _size.first;
}

int getAnchor() const
{
    return _anchor;
}

const std::vector<Flat>& Floor::getFlats() const
{
    return _flats;
}
