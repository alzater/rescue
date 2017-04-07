#ifndef FLOOR_H
#define FLOOR_H

#include "flat.h"

#include <vector>

class Floor
{
    public:
        Floor(std::pair<int, int> size, int _anchor);
        Floor(Floor&& other);

        bool addFlat(const Flat& flat);

        int getHeight() const;
        int getWidth() const;
        int getAnchor() const;
        const std::vector<Flat>& getFlats() const;

    private:
        std::pair<int, int> _size;
        int _anchor;

        std::vector<Flat> _flats;
};

#endif

