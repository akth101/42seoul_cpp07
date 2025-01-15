#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

#define MAX_VAL 10
int main()
{
    // Test default constructor
    {
        Array<int> test;
    } 
    //test parameter receiving constructor and size
    Array<int> numbers(MAX_VAL);
    {
        std::cout << "Test parameter constructor" << std::endl;
        for (int i = 0; i < numbers.size(); i++) {
            std::cout << numbers[i];
        }
        std::cout << std::endl;
    }
    // Test copy constructor and assignment operator
    {
        std::cout << "Test copy constructor and assignment operator" << std::endl;
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
        }
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != numbers[i])
            {
                std::cerr << "Copy constructor failed" << std::endl;
                return 1;
            }
            if (test[i] != tmp[i])
            {
                std::cerr << "Assignment operator failed" << std::endl;
                return 1;
            }
        }
    }
    // Test negative index
    std::cout << "Test invalid index" << std::endl; 
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Test out of bounds
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}