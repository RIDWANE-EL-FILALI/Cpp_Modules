#ifndef ARRAY_HPP
#define ARRAY_HPP

#define RESET         "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN         "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"
#include <iostream>

template <typename T>
class Array {
    public:
        Array() : elements(nullptr), arraySize(0) {};
        Array(unsigned int n) : arraySize(n) {
            elements = new T[n];
        }
        Array(const Array& other) : arraySize(other.arraySize) {
            elements = new T[arraySize];
            for (unsigned int i = 0; i < arraySize; i++) {
                elements[i] = other.elements[i];
            }
        }
        Array &operator=(const Array &other) {
            if (this != &other) {
                delete[] elements;

                arraySize = other.arraySize;
                elements = new T[arraySize];

                for (unsigned int i = 0; i < arraySize; i++)
                    elements[i] = other.elements[i];
            }
            return (*this);
        }
        ~Array() {
            delete[] elements;
        }
        T& operator[](unsigned int index) {
            if (index >= arraySize)
                throw std::out_of_range("INDEX OUT OF RANGE MY FRIEND !!");
            return elements[index];
        }
        unsigned int size() const
        {
            return arraySize;
        }

    private:
        T* elements;
        unsigned int arraySize;
};

#endif