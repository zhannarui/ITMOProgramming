#pragma once

template<class T>
class Circle {
private:
    struct Node {
        T value;
        Node *prev;
        Node *next;
    };
    int capacity;
    int size;
    Node *first;
    Node *last;
public:
    Circle(int capacity) {//создаем буфер
        size = 0;
        this->capacity = capacity;
        Node *current = new Node;
        first = current;
        last = first;
        for (int i = 0; i < capacity - 1; i++) {
            current->next = new Node;
            (current->next)->prev = current;
            current = current->next;
        }
        current->next = first;
        first->prev = current;
    }

    int Capacity() {
        return capacity;
    }

    int Size() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void Resize(int capacity) {//изменяем размер буфера
        int reverse = capacity - this->capacity;
        this->capacity = capacity;
        Node *current = new Node;
        Node *temp = last->next;
        last->next = current;
        current->prev = last;
        for (int i = 0; i < reverse - 1; i++) {
            current->next = new Node;
            (current->next)->prev = current;
            current = current->next;
        }
        current->next = temp;
        temp->prev = current;
    }

    void PushBack(T num) {//добавляем элемент в конец
        if (size == 0) {
            first->value = num;
            ++size;
            return;
        }
        if (size == capacity) {
            last = last->prev;
        } else
            ++size;
        first = first->prev;
        first->value = num;
    }

    bool DeleteLast() {
        if (size == 0) {
            return 0;
        }
        if (size == 1) {
            first = last;
        } else
            last = last->prev;
        --size;
        return 1;
    }

    void PushFront(T num) {
        if (size == 0) {
            first->value = num;
            ++size;
            return;
        }
        if (last->next == first)
            first = first->next;
        else
            ++size;
        last = last->next;
        last->value = num;
    }

    bool DeleteFirst() {
        if (size == 0) {
            return 0;
        }
        if (size == 1) {
            first = last;
        } else
            first = first->next;
        --size;
        return 1;
    }

    class Iterator {
    public:
        Node *num;

        Iterator(Node *i) : num(i) {}

        Node *operator+(int n) {
            for (int i = 0; i < n; i++) {
                num = num->next;
            }
            return num;
        }

        Node *operator-(int n) {
            for (int i = 0; i < n; i++) {
                num = num->prev;
            }
            return num;
        }

        Node *operator++(int n) {
            return num = num->next;
        }

        Node *operator--(int n) {
            for (int i = 0; i < n; i++) {
                num = num->prev;
            }
            return num = num->prev;
        }

        Node *GetNum() {
            return this->num;
        }

        bool operator==(Iterator temp) {
            return this->num == temp.num;
        }

        bool operator!=(Iterator temp) {
            return this->num != temp.num;
        }

        T &operator*() {
            return num->value;
        }
    };

    Iterator Begin() {
        return *(new Iterator(first));
    }

    Iterator End() {
        return *(new Iterator(last));
    }

    void Push(Iterator it, T element) {
        if (it == End()) {
            PushFront(element);
            return;
        }
        Node *current = it.num;
        Node *temp = current->next;
        current->next->value = element;
        current->next->next = temp;
        current->next->prev = current;
        if (size == capacity) {
            DeleteFirst();
        } else {
            ++size;
            Node *erase = last->next;
            last->next = erase->next;
            erase->next->prev = last;
            delete (erase);
        }
    }

    bool Delete(Iterator it) {
        if (size == 0) {
            return 0;
        }
        if (it == End()) {
            DeleteLast();
        } else if (it == Begin()) {
            DeleteFirst();
        } else {
            --size;
            Node *erase = it.num;
            it.num->prev->next = it.num->next;
            erase->next->prev = erase->prev;
            delete (erase);
            Node *temp = last->next;
            last->next = new Node;
            last->next->prev = last;
            last->next->next = temp;
            return 1;
        }
    }

    T &operator[](int index) {
        Node *current = first;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        return current->value;
    }
};