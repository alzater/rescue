#include "flat.h"

#include <assert.h>

Flat(std::pair<int, int> position, std::pair<int, int> size, int man, FlatType type)
    : _position(position)
    , _size(size)
    , _man(man)
    , _type(FlatType::WINDOW)
{}

std::pair<int, int> Flat::getPos() const
{
    return _position;
}

std::pair<int, int> Flat::getSize() const
{
    return _jumpHeight;
}

FlatType Flat::getType() const
{
    return _type;
}

int Flat::getMan() const
{
    return _man;
}

void Flat::decMan()
{
    assert(_man);

    if ( _man > 0 )
        _man--;
}

