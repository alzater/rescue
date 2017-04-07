// flat.h
#ifndef FLAT_H
#define FLAT_H

class Flat
{
    public:
    enum class FlatState
    {
        CLOSED,
        OPENED,
        INFIRE
    };

    enum class FlatType
    {
        WINDOW,
        TWO_WINDOWS,
    };

    public:
        Flat(int pos, int man, int jumpHeight, FlatType type);

        int getPos() const;
        int getJumpHeight() const;
        FlatState getState() const;
        FlatType getType() const;

        int getMan() const;
        void decMan();

    private:
        int _man;
        FlatState _state;
        const int _pos;
        const int jumpHeight;
        const FlatType _type;
};

#endif // FLAT_H
