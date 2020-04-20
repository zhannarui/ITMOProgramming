#include <iostream>
#include "Segment.h"

Segment::Segment() : a{0, 0}, b{0, 0}, weight(0), position(0, 0) {

}

Segment::Segment(const Segment &segment) : a(segment.a), b(segment.b), weight(segment.weight),
                                           position(segment.position) {
}

Segment::Segment(double x1, double x2, double y1, double y2, double weight_, const CVector2D &pos_) : a{x1, x2},
                                                                                                      b{y1, y2},
                                                                                                      weight(weight_),
                                                                                                      position(pos_) {

}

double Segment::square() const {
    return 0;
}

double Segment::perimeter() const {
    return 0;
}

double Segment::GetMass() const {
    return weight;
}

CVector2D Segment::GetPosition() const {
    return position;
}

bool Segment::operator==(const IPhysObject &ob) const {
    return GetMass() == ob.GetMass();
}

bool Segment::operator<(const IPhysObject &ob) const {
    return GetMass() < ob.GetMass();
}

void Segment::draw() const {
    std::cout << "Начальная координата: " << a.x << ' ' << a.y << std::endl << "Конечная координата: " << b.x << ' '
              << b.y << std::endl << "Координаты центра масс: { " << position.x << ", " << position.y << " }"
              << std::endl;
}

void Segment::initFromDialog() {
    std::cout << "Введине" << std::endl;
    std::cout << "Координаты начала: ";
    std::cin >> a.x >> a.y;
    std::cout << "Координаты конца: ";
    std::cin >> b.x >> b.y;
    std::cout << "Массу: ";
    std::cin >> weight;
    std::cout << "Координаты центра масс: ";
    std::cin >> position.x >> position.y;
}

std::string Segment::GetClassname() const {
    return name;
}

unsigned int Segment::GetSize() const {
    return sizeof(*this);
}
