#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int length, void (*func)(T value)){
	for (int i = 0; i < length; i++){
		func(array[i]);
	}
}

#endif 
