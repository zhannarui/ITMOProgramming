#include <iostream>
#include "minNum.h"
#include "Array.h"

int main() {
    int x, y;
    std::cout << "Введите два числа для сравнения: ";
    std::cin >> x >> y;
    std::cout << "Минимальное: ";
    minNum(x, y);
    int n;
    std::cout << std::endl << "Введите количество элементов массива:";
    std::cin >> n;
    Array<int> arr(n);
    std::cout << "Введите элементы массива: ";
    arr.FillArray();
    std::cout << "Наш массив: ";
    arr.ShowArray();
    int index;
    std::cout << std::endl << "Введите индекс: ";
    std::cin >> index;
    arr.TryIndex(index);
    return 0;
}