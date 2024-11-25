#include <cassert>
#include <cmath>
#include <iostream>
#include "tuple.h"

bool floatEqual(float a, float b, float epsilon = 0.0001f) {
    return std::abs(a - b) < epsilon;
}

void testVectorCreation();
void testPointCreation();
void testVectorWComponent();
void testPointWComponent();

int main() {
    std::cout << "Running tests...\n";
    
    testVectorCreation();
    testPointCreation();
    testVectorWComponent();
    testPointWComponent();
    
    std::cout << "All tests passed!\n";
    return 0;
}

void testVectorCreation() {
    std::cout << "Testing vector creation... ";
    Tuple v = Tuple::Vector(1.0f, 2.0f, 3.0f);
    assert(floatEqual(v.getX(), 1.0f));
    assert(floatEqual(v.getY(), 2.0f));
    assert(floatEqual(v.getZ(), 3.0f));
    std::cout << "PASSED\n";
}

void testPointCreation() {
    std::cout << "Testing point creation... ";
    Tuple p = Tuple::Point(4.0f, 5.0f, 6.0f);
    assert(floatEqual(p.getX(), 4.0f));
    assert(floatEqual(p.getY(), 5.0f));
    assert(floatEqual(p.getZ(), 6.0f));
    std::cout << "PASSED\n";
}

void testVectorWComponent() {
    std::cout << "Testing vector w component... ";
    Tuple v = Tuple::Vector(1.0f, 2.0f, 3.0f);
    assert(floatEqual(v.getW(), 0.0f));
    std::cout << "PASSED\n";
}

void testPointWComponent() {
    std::cout << "Testing point w component... ";
    Tuple p = Tuple::Point(4.0f, 5.0f, 6.0f);
    assert(floatEqual(p.getW(), 1.0f));
    std::cout << "PASSED\n";
}