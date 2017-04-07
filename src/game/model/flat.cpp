// flat.cpp
#include "flat.h"

Flat::Flat( int x, int man )
    : _pos(x)
    , _man(man)
{}

int Flat::getPos() const
{
    return _pos;
}

EFlatState Flat::getState() const
{
    return _state;
}

int Flat::getMan()
{
    return _man;
}

void Flat::decMan()
{
    if ( _man > 0 )
        _man--;
}
