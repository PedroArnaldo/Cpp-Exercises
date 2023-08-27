#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);

    std::cout << "Top: " << mstack.top() << std::endl;

    mstack.pop();
    
    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(5213);
    mstack.push(73231);
    mstack.push(531);
    mstack.push(98);
    mstack.pop();
    mstack.pop();
    mstack.push(7);
    mstack.push(6);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::stack<int> s(mstack);


    std::cout << "\nCopy constructor test" << std::endl;

    MutantStack<int> mstack1(mstack);

    MutantStack<int>::iterator its = mstack1.begin();
    MutantStack<int>::iterator ites = mstack1.end();

    while (its != ites)
    {
        std::cout << *its << std::endl;
        ++its;
    }

    return 0;
}