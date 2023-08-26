#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>

int main(void)
{
    try
    {
        std::cout << "Test Container Vector" << std::endl;
        std::vector<int> vec;

        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);

        int key = 2;
        std::cout << "Result: ";
        std::vector<int>::const_iterator ret = easyfind(vec, key);

        std::cout << *ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\nTest Container List" << std::endl;
        std::list<int> list;

        list.push_back(10);
        list.push_back(20);
        list.push_back(30);
        list.push_back(10);
        list.push_back(60);
        list.push_back(90);
        list.push_back(30);
        list.push_back(70);
        list.push_back(50);


        int key = 50;
        std::cout << "Result: ";
        std::list<int>::const_iterator ret = easyfind(list, key);

        std::cout << *ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\nTest Container Deque" << std::endl;
        std::deque<int> deque;

        int key = 2;
        std::cout << "Result: ";
        std::deque<int>::const_iterator ret = easyfind(deque, key);

        std::cout << *ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << "\nTest Container Vector Random Number" << std::endl;
        std::vector<int> vector;
        srand(time(NULL));
        int getKey = rand() % 10;
        int key = 0;

        for (size_t i = 0; i < 10; i++)
        {
            vector.push_back(rand());
            if (getKey == static_cast<int>(i))
                key = vector[i];
        }
        

        std::cout << "Result: ";
        std::vector<int>::const_iterator ret = easyfind(vector, key);

        std::cout << *ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
