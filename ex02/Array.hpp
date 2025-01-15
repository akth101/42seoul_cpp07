
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
    private:
        T *_array;
        int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        ~Array();
        Array &operator=(const Array &other);
        T &operator[](int index);
        int size() const;
};

#include "Array.tpp"

#endif