#include <iostream>

class Tuple {
private:
    float x, y, z, w;

public:
    static Tuple Vector(float x, float y, float z) {
        return Tuple(x, y, z, 0.0f);
    }

    static Tuple Point(float x, float y, float z) {
        return Tuple(x, y, z, 1.0f);
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ", " << w << ")" << std::endl;
    }

private:
    Tuple(float x, float y, float z, float w)
        : x(x), y(y), z(z), w(w) {}
};

int main() {
    // Create a vector
    Tuple v = Tuple::Vector(1.0f, 2.0f, 3.0f);
    std::cout << "Vector: ";
    v.print();

    // Create a point
    Tuple p = Tuple::Point(4.0f, 5.0f, 6.0f);
    std::cout << "Point: ";
    p.print();

    return 0;
}