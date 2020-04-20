#include <iostream>
#include "vector.h"

int main() {
    float x1, y1, z1;
    float x2, y2, z2;
    Vector vec;
    std::cout << "Нулевой вектор ";
    vec.print();
    std::cout << "Введите координаты первого вектора ";
    std::cin >> x1 >> y1 >> z1;
    Vector vec1(x1, y1, z1);
    std::cout << "Первый вектор ";
    vec1.print();
    std::cout << "Vec + Vec1 = ";
    vec1.addition(vec);
    vec1.print();
    std::cout << "Введите координаты второго вектора";
    std::cin >> x2 >> y2 >> z2;
    Vector vec2(x2, y2, z2);
    std::cout << "Второй вектор ";
    vec2.print();
    std::cout << "Vec1 - Vec2 = ";
    vec1.subtraction(vec2);
    vec1.print();
    std::cout << "Длина первого вектора = ";
    vec1.length();
    std::cout << "Длина второго вектора = ";
    vec2.length();
    vec1.angle(vec);
    vec1.angle(vec2);
    std::cout << "Нулевой вектор ";
    vec.print();
    std::cout << "Первый вектор ";
    vec1.print();
    std::cout << "Второй вектор ";
    vec2.print();

    return 0;
}