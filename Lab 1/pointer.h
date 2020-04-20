//#ifndef INC_1_POINTER_H
//#define INC_1_POINTER_H

#include <cmath>
#include <complex>

using namespace std;

void pointer_task2(double *point_number1, double *point_number2);

void pointer_task5(double *point_real_number);

void reference_task2(double &ref_number1, double &ref_number2);

void reference_task5(double &ref_real_number);

void pointer_task10(complex<double> *z);

void reference_task10(complex<double> &z);

struct square {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
};

void pointer_task13(square *, double *, double *);

void reference_task13(square &, double &, double &);


//#endif

