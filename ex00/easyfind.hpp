#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class NotFoundException : public std::exception
{
	const char *what() const throw()
	{
		return ("NotFoundException");
	}
};

template <typename T>
typename T::iterator easyfind(T &a, int n);

#include "easyfind.tpp"
#endif