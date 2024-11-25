#ifndef TUPLE_H
#define TUPLE_H

#include <iostream>

class Tuple {
private:
    float x, y, z, w;

public:
    static Tuple Vector(float x, float y, float z);
    static Tuple Point(float x, float y, float z);
    void print() const;
    
    // Add getters for testing
    float getX() const { return x; }
    float getY() const { return y; }
    float getZ() const { return z; }
    float getW() const { return w; }

private:
    Tuple(float x, float y, float z, float w)
        : x(x), y(y), z(z), w(w) {}
};

#endif // TUPLE_H