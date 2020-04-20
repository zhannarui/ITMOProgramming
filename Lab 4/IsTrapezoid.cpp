#include <iostream>
#include "IsTrapezoid.h"

IsoscelesTrapezoid::IsoscelesTrapezoid() : a(0, 0), b(0, 0), c(0, 0), d(0, 0), weight(0), position(0, 0) {
}

IsoscelesTrapezoid::IsoscelesTrapezoid(CVector2D &coord, double a_, double b_, double c_, double d_, double weight_,
                                       CVector2D &pos)
        : a(coord), b(coord), c(coord), d(coord), aSide(a_), bSide(b_), cSide(c_), dSide(d_), weight(weight_),
          position(pos) {

}

double IsoscelesTrapezoid::square() const {
    return ((aSide + cSide) / 2) * sqrt(pow(bSide, 2) - pow(aSide - cSide, 2) / 4);
}

double IsoscelesTrapezoid::perimeter() const {
    return (aSide + bSide + cSide + dSide);
}

double IsoscelesTrapezoid::GetMass() const {
    return weight;
}

CVector2D IsoscelesTrapezoid::GetPosition() const {
    return position;
}

bool IsoscelesTrapezoid::operator==(const IPhysObject &ob) const {
    return GetMass() == ob.GetMass();
}

bool IsoscelesTrapezoid::operator<(const IPhysObject &ob) const {
    return GetMass() < ob.GetMass();
}


std::string IsoscelesTrapezoid::GetClassname() const {
    return name;
}

unsigned int IsoscelesTrapezoid::GetSize() const {
    return sizeof(*this);
}

void IsoscelesTrapezoid::draw() const {
    std::cout << "Длина сторон трапеции: " << "a = " << aSide << " b = " << bSide << " c = " << cSide << " d = "
              << dSide << std::endl;
    std::cout << "Координаты центра массы: {" << position.x << ", " << position.y <<"}"<<std::endl;
}

void IsoscelesTrapezoid::initFromDialog() {
    std::cout << "Введите координаты 4х точек: " << std::endl;
    std::cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
    getSide();
    std::cout << "Введите массу: ";
    std::cin >> weight;
    std::cout << "Введите координаты центра масс: ";
    std::cin >> position.x >> position.y;
}

void IsoscelesTrapezoid::getSide() {
    aSide = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
    bSide = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
    cSide = sqrt(pow(d.x - c.x, 2) + pow(d.y - c.y, 2));
    dSide = sqrt(pow(a.x - d.x, 2) + pow(a.y - d.y, 2));
}
