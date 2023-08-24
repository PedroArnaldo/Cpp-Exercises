#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <string> // nao sei se esses includes sao necessarios nesse arquivo
#include <iostream>

template <typename T>
void swap(T &a, T &b){
	T aux;

	aux = a;
	a = b;
	b = aux;
}

template <typename T>
T min(T a, T b){
	
	if (a > b) // caso eles sejam iguais tem que retornar o segundo argumento
		return b; 
	else
		return a;
}

template <typename T>
T max(T a, T b){
	if (a > b)
		return a;
	else
		return b;
}

#endif

