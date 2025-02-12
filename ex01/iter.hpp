
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter (T *array, int length, void (*fn)(T&))
{
    if (!array || !fn) {
        std::cout << "Error: array or function pointer is null" << std::endl;
        return;
    }
	for (int i = 0; i < length; i++) {
		fn(array[i]);
	}
}

template<typename T>
void print(T &elem)
{
	std::cout << elem << " ";
}

template<typename T>
void addSelf(T &elem)
{
	elem = elem + elem;
}



#endif