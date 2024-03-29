#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <algorithm>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{

    public:
        MutantStack(void){

        }

        MutantStack(const MutantStack &cpy) : std::stack<T, std::deque<T> >(cpy){
        }

        ~MutantStack(){

        }

        MutantStack<T>& operator=(const MutantStack &src){
            if (this != &src){
                this->c = std::stack<T, std::deque<T> >::container_type();
                this->c = src.c;
            }
            return *this;
        }

        typedef typename  std::stack<T>::container_type::iterator iterator;

        iterator begin(){
            return this->c.begin();
        }

        iterator end(){
            return this->c.end();
        }
        
};

#endif