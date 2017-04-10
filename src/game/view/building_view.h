#ifndef BUILDING_VIEW_H
#define BUILDING_VIEW_H

#include <string>
#include <map>

class Building;
enum class Flat::FlatType;
class cocos2d::Node;

class BuildingView
{
    public:
        BuildingView(const Building& building);
        void loadConfig(const std::string& config); // TODO
        Node* getView();

    private:
        Sprite* createWindow(FlatType type, std::pair<int, int> size);
        void loadDefaultConfig();

    private:
        const Building& _building;

        std::string _spriteName; // TODO
};

#endif // FLAT_H
