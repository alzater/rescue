// building.h
#ifndef BUILDING_H
#define BUILDING_H

#include "floor.h"

#include <vector>

class Building
{
    public:
        Building();

    public:
        void addFloor( Floor&& floor );
        const std::vector<Floor>& getFloors() const;

    private:
        std::vector<Floor> _floors;
};

#endif // BUILDING_H
