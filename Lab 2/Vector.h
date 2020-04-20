#pragma once

class Vector {
private:
    float x;
    float y;
    float z;
public:
    Vector();

    Vector(const Vector &);

    Vector(const float &, const float &, const float &);


    void addition(const Vector &vec);

    void subtraction(const Vector &vec);

    void length();

    void angle(const Vector &vec);

    void print();




};
