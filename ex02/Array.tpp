#include "Array.hpp"


template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0) {
    std::cout << "Array allocated at: " << (void*)_array << std::endl;

}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    _array = new T[n]();
}

template <typename T>
Array<T>::Array(const Array &other) : _array(new T[other._size]), _size(other._size) {
    for (int i = 0; i < _size; ++i) {
        _array[i] = other._array[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
    if (this != &other) {
        delete[] _array;
        _size = other._size;
        _array = new T[_size];
        for (int i = 0; i < _size; ++i) {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}


template <typename T>
T &Array<T>::operator[](int index) {
    if (index >= _size)
        throw std::exception();
    if (index < 0)
        throw std::exception();
    return _array[index];
}

template <typename T>
int Array<T>::size() const {
    return _size;
}
