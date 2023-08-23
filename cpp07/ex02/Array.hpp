#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <string>

template <typename T> class Array {
	private:
		T* _elements;
		size_t _arraySize;

	public:
		Array<T>(void);
		Array<T>(size_t size);
		Array<T>(const Array<T> &src);
		virtual ~Array<T>(void);

		Array<T>& operator=(const Array<T> &src);
		Array<T>& operator[](size_t index) const;
		size_t size(void) const;

	class OutOfRangeException : public std::exception {
		public:
			virtual const char *what(void) const throw();
	};
};

#include "Array.tpp"

#endif
