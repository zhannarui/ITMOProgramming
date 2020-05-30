#pragma once
template<class T>
class Circle {
private:
    struct Node {
        T value;
        Node *prev;
        Node *next;
    };
    int capacity{};
    int size;
    Node *first;
    Node *last;
public:
    explicit Circle(int capacity);

    int Capacity();

    int Size();

    bool isEmpty();

    void Resize(int capacity);

    void PushBack(T num);

    bool DeleteLast();

    void PushFront(T num);

    bool DeleteFirst();

    class Iterator {
    public:
        Node *num;

        explicit Iterator(Node *i);

        Node *operator+(int n);

        Node *operator-(int n);

        Node *operator++(int n);

        Node *operator--(int n);

        Node *GetNum();

        bool operator==(Iterator temp);

        bool operator!=(Iterator temp);

        T &operator*();
    };

    Iterator Begin() {
        return *(new Iterator(first));
    }

    Iterator End() {
        return *(new Iterator(last));
    }

    void Push(Iterator it, T element);

    bool Delete(Iterator it);

    T &operator[](int index);
};






