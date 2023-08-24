#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> // tem um arquivo de testes pegadinha na avaliaçao
// nesse arquivo as funções parametro recebem argumento const
// logo é melhor deixar const aqui, ja deixei comentado
void iter(T *array, int length, void (*func)(T /*const*/ value)){
	for (int i = 0; i < length; i++){
		func(array[i]);
	}
}

#endif 
