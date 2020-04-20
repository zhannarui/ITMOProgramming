#pragma once

#include <vector>

class Matrix {
private:
    std::vector<std::vector<float>> matrix;
public:
    Matrix();

    explicit Matrix(const std::vector<float> &);

    Matrix(const Matrix &);

    Matrix operator*(const float &);

    Matrix operator*(const Matrix &);

    Matrix operator+(const Matrix &);

    Matrix operator-(const Matrix &);

    bool operator==(const Matrix &);

    bool operator!=(const Matrix &);

    void print();


};