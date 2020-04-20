#include <iostream>
#include <vector>

#pragma once

class exception {
protected:
    std::string error;
public:
    virtual std::string check() = 0;
};

class NonexistentIndex : public exception {
public:
    NonexistentIndex() {
        error = "no such index in array";
    }

    std::string check() override {
        return error;
    }
};

template<typename T>
class Array {
private:
    int N;
    std::vector<T> mass;

    T IndexReference(T index) {
        if (index < 0 || index > N) {
            throw NonexistentIndex();
        }
        std::cout << mass[index];
    }

public:
    Array() {
        N = 0;
        mass.resize(N);
    }

    explicit Array(int n) : N(n) {
        mass.resize(N);
    }

    void FillArray() {
        for (int i = 1; i <= N; i++)
            std::cin >> mass[i];
    }

    void ShowArray() {
        for (int i = 1; i <= N; i++)
            std::cout << mass[i] << " ";
    }

    void TryIndex(T index) {
        try {
            IndexReference(index);
        }
        catch (NonexistentIndex error) {
            std::cout << error.check() << std::endl;
        }
    }
};

