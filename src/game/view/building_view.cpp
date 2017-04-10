#include "building_view.h"

#include "../model/building.h"

BuildingView::BuildingView(const Building& building)
    : _building(building)
{}

void BuildingView::loadConfig(const std::string& config)
{
    _spriteName = "window.png";
}

Node* Building::getView()
{
    float height = 0;
    for( auto floor : _building.getFloors() )
    {
        for( auto window : _floor.getWindows() )
        {
            auto position = window.getPosition();
            auto windowView = createWindow(FlatType::WINDOW, window.getSize());
            windowView->setPosition(position.first, position.second + heignt);
        }

        height += floor.getSize().second;
    }
}

Sprite* BuildingView::createWindow(FlatType type, std::pair<int, int> size)
{
    auto window = Sprite::create(_spriteName);
    window.setSize(size.first, size.second);
    return window;
}

void BuildingView::loadDefaultConfig()
{}
