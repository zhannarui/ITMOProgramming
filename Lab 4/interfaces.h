#include <iostream>

#pragma once

//Интерфейс "Геометрчическая фигура".
class IGeoFig {
public:
    //Площадь.
    virtual double square() const = 0;

    //Периметр.
    virtual double perimeter() const = 0;
};

//Вектор.
class CVector2D {
public:
    double x, y;
    CVector2D() {
        x = 0;
        y = 0;
    }

    CVector2D(double x_, double y_) {
        x = x_;
        y = y_;

    }

};

//Интерфейс "Физический объект".
class IPhysObject {
public:
    //Масса,кг.
    virtual double GetMass() const = 0;

    //Координаты центра масс, м.
    virtual CVector2D GetPosition() const = 0;

    //Сравнение по массе.
    virtual bool operator==(const IPhysObject &ob) const = 0;

    //Сравнение по массе.
    virtual bool operator<(const IPhysObject &ob) const = 0;
};

//Интерфейс "Отображаемый"
class IPrintable {
public:
    //Отобразить на экране
    //(выводить в текстовом виде параметры фигуры).
    virtual void draw() const = 0;
};

//Интерфейс для классов, которые можно задать через диалог с пользователем.
class IDialogInitiable {
public:
    //Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};

//Интерфейс "Класс"
class BaseCObject {
public:
    //Имя класса(типа данных).
    virtual std::string GetClassname() const = 0;

    //Размер занимаемой памяти.
    virtual unsigned int GetSize() const = 0;
};

class IFigure
        : public IGeoFig,
          public CVector2D,
          public IPhysObject,
          public IPrintable,
          public IDialogInitiable,
          public BaseCObject {
};
