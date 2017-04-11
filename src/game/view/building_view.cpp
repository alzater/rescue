#include "building_view.h"

#include "../model/building.h"

BuildingView::BuildingView(const Building& building)
    : _building(building)
{}

void BuildingView::loadConfig(const std::string& config)
{
    _spriteName = "window.png";
}

cocos2d::Node* BuildingView::getView()
{
    cocos2d::Node* node = new cocos2d::Node;

    float height = 0;
    for( auto floor : _building.getFloors() )
    {
        for( auto window : floor.getFlats() )
        {
            auto position = window.getPosition();
            auto windowView = createWindow(Flat::FlatType::WINDOW, window.getSize());
            windowView->setPosition(position.first, position.second + height);

            node->addChild(windowView);
        }

        height += (float)floor.getHeight();
    }

    return node;
}

cocos2d::Sprite* BuildingView::createWindow(Flat::FlatType type, std::pair<int, int> size)
{
    auto window = cocos2d::Sprite::create(_spriteName);
    window->setScale(0.2f);
    return window;
}

void BuildingView::loadDefaultConfig()
{}
