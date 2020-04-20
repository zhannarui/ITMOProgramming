#include "pointer.h"

void pointer_task2(double *point_number1, double *point_number2) {
    *point_number1 += *point_number2;
}

void pointer_task5(double *point_real_number) {
    *point_real_number -= (int) *point_real_number;
}

void reference_task2(double &ref_number1, double &ref_number2) {
    ref_number1 += ref_number2;
}

void reference_task5(double &ref_real_number) {
    ref_real_number -= (int) ref_real_number;
}

void pointer_task10(complex<double> *z) {
    complex<double> (2,3);
}

void reference_task10(complex<double> &z) {
    complex<double>(2, 3);
}

void pointer_task13(square *coord, double *x, double *y) {
    coord->x1 += *x;
    coord->y1 += *y;
    coord->x2 += *x;
    coord->y2 += *y;
    coord->x3 += *x;
    coord->y3 += *y;
    coord->x4 += *x;
    coord->y4 += *y;
}

void reference_task13(square &coord, double &x, double &y) {
    coord.x1 += x;
    coord.y1 += y;
    coord.x2 += x;
    coord.y2 += y;
    coord.x3 += x;
    coord.y3 += y;
    coord.x4 += x;
    coord.y4 += y;
}


