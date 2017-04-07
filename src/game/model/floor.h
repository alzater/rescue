// Floor.h
#ifndef FLOOR_H
#define FLOOR_H

#include "flat.h"

#include <vector>

class Floor
{
    public:
        Floor(unsigned int _width, unsigned int _height, unsigned int _anchor);
        Floor(Floor&& another);

        unsigned int getHeight() const;
        unsigned int getWidth() const;
        const std::vector<Flat> getFlats() const;

    private:
        unsigned int _height;
        unsigned int _width;
        unsigned int _anchor;

        std::vector<Flat> _flats;
};

#endif

