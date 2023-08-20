#ifndef	CLASSGENERATE_HPP
#define CLASSGENERATE_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#define RED "\033[1;31m"
#define END "\033[1;39m"
#define GREEN "\033[1;32m"

class ClassGenerate{
	public:
		ClassGenerate(void);
		ClassGenerate(ClassGenerate const &cpy);
		~ClassGenerate(void);
		ClassGenerate& operator=(ClassGenerate const  &src);
		Base* generate(void);
		void identify(Base *p);
		void identify(Base &p);

};

#endif

