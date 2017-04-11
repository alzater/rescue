#include "flat.h"

#include <assert.h>

Flat::Flat(std::pair<int, int> position, std::pair<int, int> size, int men, FlatType type)
    : _position(position)
    , _size(size)
    , _men(men)
    , _type(FlatType::WINDOW)
{}

Flat::Flat(const Flat& other)
    : _position(other._position)
    , _size(other._size)
    , _men(other._men)
    , _type(other._type)
{}

Flat& Flat::operator=(const Flat& other)
{
    _position = other._position;
    _size = other._size;
    _men = other._men;
    _type = other._type;

    return *this;
}

std::pair<int, int> Flat::getPosition() const
{
    return _position;
}

std::pair<int, int> Flat::getSize() const
{
    return _size;
}

Flat::FlatType Flat::getType() const
{
    return _type;
}

int Flat::getMen() const
{
    return _men;
}

void Flat::decreseMan()
{
    assert(_men);

    if ( _men > 0 )
        _men--;
}

