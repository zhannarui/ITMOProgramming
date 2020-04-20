#include <iostream>
#include "pointer.h"

using namespace std;

int main() {

    // ЗАДАНИЕ 2
    double number1, number2;
    cout << "Задание 2" << endl;
    cout << "Введите два числа: ";
    cin >> number1 >> number2;
    pointer_task2(&number1, &number2);
    cout << "Результат работы с указателями: новое число = " << number1 << endl;
    cout << "Введите два числа: ";
    cin >> number1 >> number2;
    reference_task2(number1, number2);
    cout << "Результат работы с ссылкой: новое число = " << number1 << endl << endl;
    // ЗАДАНИЕ 5
    double real_number;
    cout << "Задание 5" << endl;
    cout << "Введите вещественное число: ";
    cin >> real_number;
    pointer_task5(&real_number);
    cout << "Результат работы с указателями: целая часть вещественного числа = " << real_number << endl;
    cout << "Введите вещественное число: ";
    cin >> real_number;
    reference_task5(real_number);
    cout << "Результат работы с ссылкой: целая часть вещественного числа = " << real_number << endl << endl;
    // ЗАДАНИЕ 10
    cout << "Задание 10" << endl;
    double a = 2, b = 3;
    complex z = complex(a, b);
    complex<double>(a, b);
    cout << "Комплексное число z: " << z << endl;
    pointer_task10(&z);
    cout << "Результат работы с указателями: комплексно сопряженное число z = " << conj(z) << endl;
    cout << "Комплексное число z: " << z << endl;
    reference_task10(z);
    cout << "Результат работы с ссылкой: комплексно сопряженное число z =  " << conj(z) << endl << endl;
    // ЗАДАНИЕ 13
    square coord{};
    double x;
    double y;
    cout << "Задание 13: " << endl;
    cout << "Введите координаты квадрата: ";
    cin >> coord.x1 >> coord.y1 >> coord.x2 >> coord.y2 >> coord.x3 >> coord.y3 >> coord.x4 >> coord.y4;
    cout << "Введите вектор смещения: ";
    cin >> x >> y;
    pointer_task13(&coord, &x, &y);
    cout << "Результат работы с указателями: " << coord.x1 << " " << coord.y1 << " " << coord.x2 << " " << coord.y2
         << " " << coord.x3 << " " << coord.y3 << " " << coord.x4 << " "
         << coord.y4 << endl;
    cout << "Введите координаты квадрата: ";
    cin >> coord.x1 >> coord.y1 >> coord.x2 >> coord.y2 >> coord.x3 >> coord.y3 >> coord.x4 >> coord.y4;
    reference_task13(coord, x, y);
    cout << "Результат работы с ссылкой: " << coord.x1 << " " << coord.y1 << " " << coord.x2 << " " << coord.y2 << " "
         << coord.x3 << " " << coord.y3 << " " << coord.x4 << " "
         << coord.y4;
}