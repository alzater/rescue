#ifndef BUILDING_H
#define BUILDING_H

#include "floor.h"

#include <vector>

class Building
{
    public:
        Building(int maxWidth);

        void addFloor( Floor&& floor );
        const std::vector<Floor>& getFloors() const;

        int getMaxWidth() const;
        int hasMen();

    private:
        std::vector<Floor> _floors;

        int _maxWidth;
        bool _isEmpty = true;
};

#endif // BUILDING_H
