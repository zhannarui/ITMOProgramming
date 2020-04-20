#include <iostream>
#include "Matrix.h"


Matrix::Matrix() {
    matrix.resize(3);
    for (std::vector<float> &i:matrix) {
        i.resize(3);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = i * 3 + j;
        }
    }
}

Matrix::Matrix(const Matrix &other_matrix) {
    matrix.resize(3);
    for (std::vector<float> &i:matrix) {
        i.resize(3);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = other_matrix.matrix[i][j];
        }
    }
}

Matrix::Matrix(const std::vector<float> &vector) {
    matrix.resize(3);
    for (std::vector<float> &i:matrix) {
        i.resize(3);
    }
    if (vector.size() != 9) {
        std::cout << "Неверные данные" << std::endl;
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = vector[i * 3 + j];
            }
        }
    }
}

Matrix Matrix::operator*(const float &num) {
    Matrix buffer{};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buffer.matrix[i][j] = matrix[i][j] * num;
        }
    }
    return buffer;
}

Matrix Matrix::operator*(const Matrix &Mat) {
    Matrix buffer{};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buffer.matrix[i][j] =
                    matrix[i][0] * Mat.matrix[0][j] + matrix[i][1] * Mat.matrix[1][j] + matrix[i][2] * Mat.matrix[2][j];
        }
    }
    return buffer;
}

Matrix Matrix::operator-(const Matrix &Mat) {
    Matrix buffer{};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buffer.matrix[i][j] = matrix[i][j] - Mat.matrix[i][j];
        }
    }
    return buffer;
}

bool Matrix::operator==(const Matrix &Mat) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != Mat.matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrix::operator!=(const Matrix &Mat) {
    bool temp = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] != Mat.matrix[i][j]) {
                temp = false;
            }
        }
    }
    return temp;
}

void Matrix::print() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

Matrix Matrix::operator+(const Matrix &Mat) {
    Matrix buffer{};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            buffer.matrix[i][j] = matrix[i][j] + Mat.matrix[i][j];
        }
    }
    return buffer;

}

