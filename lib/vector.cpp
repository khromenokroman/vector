#include <iostream>

#include "vector.h"

Vector::Vector(int size_) //init vector
{
    size_vector = size_;
    capacity_vector = size_vector*2;
    vec = new int[capacity_vector];
    std::cout << "constr" << std::endl;
}

int Vector::size() {return size_vector;}

int Vector::capacity() {return capacity_vector;}