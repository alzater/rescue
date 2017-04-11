#ifndef BUILDING_VIEW_H
#define BUILDING_VIEW_H

#include "../model/building.h"

#include <cocos2d.h>

#include <string>
#include <map>

class BuildingView
{
    public:
        BuildingView(const Building& building);

        void loadConfig(const std::string& config); // TODO
        cocos2d::Node* getView();

    private:
        cocos2d::Sprite* createWindow(Flat::FlatType type, std::pair<int, int> size);
        void loadDefaultConfig();

    private:
        const Building& _building;

        std::string _spriteName; // TODO
};

#endif // FLAT_H
