#include "tuple.h"

Tuple Tuple::Vector(float x, float y, float z) {
    return Tuple(x, y, z, 0.0f);
}

Tuple Tuple::Point(float x, float y, float z) {
    return Tuple(x, y, z, 1.0f);
}

void Tuple::print() const {
    std::cout << "(" << x << ", " << y << ", " << z << ", " << w << ")" << std::endl;
}