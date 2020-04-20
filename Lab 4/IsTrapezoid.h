#pragma once

#include <iostream>
#include "interfaces.h"
#include <cmath>

class IsoscelesTrapezoid : IFigure {
private:
    double weight;
    const std::string name = "Isosceles trapezoid";
    CVector2D a, b, c, d;
    double aSide, bSide, dSide, cSide;
    void getSide();
    CVector2D position;
public:
    IsoscelesTrapezoid();

    IsoscelesTrapezoid(CVector2D &, double, double, double, double, double, CVector2D &);

    double square() const override;

    double perimeter() const override;

    double GetMass() const override;

    CVector2D GetPosition() const override;

    bool operator==(const IPhysObject &) const override;

    bool operator<(const IPhysObject &) const override;

    void draw() const override;

    void initFromDialog() override;

    std::string GetClassname() const override;

    unsigned int GetSize() const override;
};