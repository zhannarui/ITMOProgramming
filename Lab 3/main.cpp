#include <iostream>
#include "Matrix.h"
#include "Set.h"

int main() {
    //ЗАДАНИЕ 4
    std::cout << "Задание 4" << std::endl;
    std::cout << "Первая матрица" << std::endl;
    Matrix Mat1{};
    Mat1.print();
    std::vector<float> buffer = {3.25, 5, 2, 5.5, 1, 7, 34, -5, 8};
    Matrix Mat2{buffer};
    std::cout << "Вторая матрица" << std::endl;
    Mat2.print();
    if (Mat1 == Mat2) {
        std::cout << "Матрицы 1 и 2 равны" << std::endl;
    } else {
        std::cout << "Матрицы 1 и 2 не равны" << std::endl;
    }
    Matrix Mat3 = Mat1 * 4;
    std::cout << "\nТретья матрица (Результат умножения первой матрицы на число)" << std::endl;
    Mat3.print();
    Matrix Mat4 = Mat1 * Mat2;
    std::cout << "Четвертая матрица (Результат перемножения матриц 1 и 2)" << std::endl;
    Mat4.print();
    Matrix Mat5(Mat2);
    std::cout << "\nПятая матрица" << std::endl;
    Mat5.print();
    std::cout << "Вторая матрица" << std::endl;
    Mat2.print();
    if (Mat5 == Mat2) {
        std::cout << "Матрицы 5 и 2 равны" << std::endl;
    } else {
        std::cout << "Матрицы 5 и 2 не равны" << std::endl;
    }
    Matrix Mat6;
    Mat6 = Mat1 + Mat2;
    std::cout << "\nСложение матриц 1 и 2" << std::endl;
    Mat6.print();
    Matrix Mat7;
    Mat7 = Mat3 - Mat4;
    std::cout << "Вычитаем из 3 матрицы 4" << std::endl;
    Mat7.print();
    //ЗАДАНИЕ 7
    std::cout << "\nЗадание 7" << std::endl;
    Set s1;
    s1 += 2;
    s1 += 4;
    s1 += 6;
    std::cout << "Добавили элементы в множество ";
    s1.print();
    s1 -= 4;
    std::cout << "\nУдалили элемент из множества ";
    s1.print();
    Set s2;
    s2 += 2;
    s2 += 7;
    std::cout << "\nПервое множество ";
    s1.print();
    std::cout << "\nВторое множество ";
    s2.print();
    std::cout << std::endl;
    if (s1 == s2) {
        std::cout << "Множества 1 и 2 равны" << std::endl;
    } else {
        std::cout << "Множества 1 и 2 не равны" << std::endl;
    }
    std::cout << "Объединили два множетсва ";
    (s1 + s2).print();
    Set s3;
    s3 += 1;
    s3 += 3;
    s3 += 4;
    Set s4;
    s4 += 1;
    s4 += 3;
    s4 += 4;
    std::cout << "\nТретье множество ";
    s3.print();
    std::cout << "\nЧетвертое множество ";
    s4.print();
    std::cout << std::endl;
    if (s3 == s4) {
        std::cout << "Множества 3 и 4 равны" << std::endl;
    } else {
        std::cout << "Множества 3 и 4 не равны" << std::endl;
    }
    return 0;
}