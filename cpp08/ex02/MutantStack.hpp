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

        MutantStack(const MutantStack &cpy){
            this = cpy;
        }

        ~MutantStack(){

        }

        MutantStack<T>& operator=(const MutantStack &src){
            (void) src;
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