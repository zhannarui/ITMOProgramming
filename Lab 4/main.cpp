#include <iostream>
#include "IsTrapezoid.h"
#include "Segment.h"

int main() {
    IsoscelesTrapezoid t;
    std::cout << "Имя класса: " << t.GetClassname() << std::endl;
    t.initFromDialog();
    t.draw();
    std::cout << "Периметр: " << t.perimeter() << std::endl;
    std::cout << "Площадь: " << t.square() << std::endl;
    std::cout << "Масса: " << t.GetMass() << std::endl;
    std::cout << "Память, занимаемая классом: " << t.GetSize() << std::endl << std::endl;
    Segment s;
    std::cout << "Имя класса: " << s.GetClassname() << std::endl;
    s.initFromDialog();
    s.draw();
    std::cout << "Периметр: " << s.perimeter() << std::endl;
    std::cout << "Площадь: " << s.square() << std::endl;
    std::cout << "Масса: " << s.GetMass() << std::endl;
    std::cout << "Память, занимаемая классом: " << s.GetSize() << std::endl;
    return 0;
}