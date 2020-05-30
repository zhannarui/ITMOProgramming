#include <iostream>
#include "CircleBuffer.hpp"
int main() {
    Circle<int> CircleBuffer(5);
    Circle<int>::Iterator it = CircleBuffer.Begin();
    for (int i = 1; i <= 10; i++) {
        CircleBuffer.PushFront(i);
    }
    std::cout << "Выведем состояние буфера при помощи итератора: ";
    for (it = CircleBuffer.Begin(); it != CircleBuffer.End(); it++) {
        std::cout << *it << " ";
    }
    std::cout << *CircleBuffer.End() << std::endl;
    std::cout << "Удалим первый элемент:\n";
    CircleBuffer.DeleteFirst();
    std::cout << "Состояние буфера: ";
    for (int i = 0; i < CircleBuffer.Size(); i++)
        std::cout << CircleBuffer[i] << " ";

    std::cout << "\nУдалим последний элемент:\n";
    CircleBuffer.DeleteLast();
    std::cout << "Состояние буфера: ";
    for (int i = 0; i < CircleBuffer.Size(); i++)
        std::cout << CircleBuffer[i] << " ";

    std::cout << "\nУдаляем оставшиеся элементы при помощи интератора:\n";
    it = CircleBuffer.Begin();
    while (!CircleBuffer.isEmpty()) {
        CircleBuffer.Delete(it);
        it++;
    }
    std::cout << "Состояние буфер: ";
    for (int i = 0; i < CircleBuffer.Size(); i++)
        std::cout << CircleBuffer[i] << " ";
    std::cout << std::endl;
    std::cout << "Размерность буфера на данный момент: ";
    std::cout << CircleBuffer.Capacity();
    std::cout << "\nУвеличиваем вместимость буфера до 10\n";
    CircleBuffer.Resize(10);


    std::cout << "Вставляем новые числа: \n";
    for (int i = 1; i <= 10; i++) {
        CircleBuffer.PushBack(i);
    }
    std::cout << "Состояние буфер: ";
    for (int i = 0; i < CircleBuffer.Size(); i++)
        std::cout << CircleBuffer[i] << " ";
    std::cout << std::endl;


    std::cout << "Заменим Первый элемент, последний и 8-ой:\n";
    *(CircleBuffer.Begin()) = -7;
    *(CircleBuffer.End()) = -9;
    CircleBuffer.Push(it, 7);
    std::cout << "Состояние буфера: ";
    for (int i = 0; i < CircleBuffer.Size(); i++)
        std::cout << CircleBuffer[i] << " ";
    std::cout << std::endl;


}