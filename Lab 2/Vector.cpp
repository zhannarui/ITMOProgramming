#include <iostream>
#include <cmath>

#include "Vector.h"

Vector::Vector()
        : x(0), y(0), z(0) {}

Vector::Vector(const Vector &other)
        : x(other.x), y(other.y), z(other.z) {}

Vector::Vector(const float &valueX, const float &valueY, const float &valueZ)
        : x(valueX), y(valueY), z(valueZ) {}


void Vector::addition(const Vector &vec) {
    x += vec.x;
    y += vec.y;
    z += vec.z;
}

void Vector::subtraction(const Vector &vec) {
    x -= vec.x;
    y -= vec.y;
    z -= vec.z;

}

void Vector::length() {
    std::cout << std::sqrtf(pow(x, 2) + pow(y, 2) + pow(z, 2)) << std::endl;
}

void Vector::angle(const Vector &vec) {
    if ((powf(x, 2) + powf(y, 2) + powf(z, 2)) == 0 || (powf(vec.x, 2) + powf(vec.y, 2) + powf(vec.z, 2)) == 0) {
        std::cout << "Не существует угла с нулевым вектором" << std::endl;
    } else {
        std::cout << "Угол между векторами = "
                  << acosf((x * vec.x + y * vec.y + z * vec.z) / (std::sqrtf(pow(x, 2) +
                  pow(y, 2) + pow(z, 2)) * std::sqrtf(powf(vec.x, 2) + powf(vec.y, 2) +
                  powf(vec.z, 2)))) << " радиан" << std::endl;
    }
}

void Vector::print() {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}






