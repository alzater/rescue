#ifndef FLAT_H
#define FLAT_H

class Flat
{
    public:
    enum class FlatType
    {
        WINDOW,
        TWO_WINDOWS
    };

    public:
        Flat(std::pair<int, int> position, std::pair<int, int> size, int man, FlatType type);

        std::pair<int, int> getPosition() const;
        std::pair<int, int> getSize() const;
        FlatType getType() const;

        int getMan() const;
        void decMan();

    private:
        int _man;
        const std::pair<int, int> _position;
        const std::pair<int, int> _size;
        const FlatType _type;
};

#endif // FLAT_H
