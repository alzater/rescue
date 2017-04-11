#ifndef FLAT_H
#define FLAT_H

#include <utility>

class Flat
{
    public:
    enum class FlatType
    {
        WINDOW,
        TWO_WINDOWS
    };

    public:
        Flat(std::pair<int, int> position, std::pair<int, int> size, int men, FlatType type);
        Flat(const Flat& other);

        Flat& operator=(const Flat& other);

        std::pair<int, int> getPosition() const;
        std::pair<int, int> getSize() const;
        FlatType getType() const;

        int getMen() const;
        void decreseMan();

    private:
        std::pair<int, int> _position;
        std::pair<int, int> _size;
        FlatType _type;

        int _men;
};

#endif // FLAT_H
