#include <iostream>
#include "Iterator.h"
#include <vector>

bool predicate(int x) {
    return x > 0;
}

int main() {
    std::vector<int> v1 = {-1, 0, 1};
    std::vector<double> v2 = {-1.87, 2.98, -1, 3};
    std::vector<int> v3 = {20, -30, 25};
    std::cout << (any_of(v1.begin(), v1.end(), predicate) ? "Существует элемент удовлетворяющий условию\n"
                                                          : "Не cуществует элемента удовлетворяющий условию\n");
    std::cout << (one_of(v2.begin(), v2.end(), predicate) ? "Cуществует ровно один элемент удовлетворяющий условию\n"
                                                          : "Существует больше одного элемента удовлетворяющего условию\n");
    std::cout << (is_palindrome(v3.begin(), v3.end(), predicate) ? "Заданная последовательность является палиндромом\n"
                                                                 : "Заданная последовательность не является палиндромом\n");
    return 0;
}