#pragma once

#include <iostream>
#include "interfaces.h"
#include <cmath>

class Segment : public IFigure {
private:
    CVector2D a, b;
    double weight;
    const std::string name = "Segment";
    CVector2D position{};
public:
    Segment();

    Segment(const Segment &);

    Segment(double, double, double, double, double, const CVector2D &);

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


