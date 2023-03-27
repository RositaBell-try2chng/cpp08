#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
	unsigned int		N;//max size
	unsigned int		curr_N;
	std::vector<int>	vec;
public:
	Span();
	Span(unsigned int _N);
	Span(Span const &oth);
	~Span();


	std::vector<int>	getVec() const;
	unsigned int		getSize() const;
	void				addNumber(int a);
	int					shortestSpan();
	int					longestSpan();
	Span	&operator=(Span const &oth);

	//add n numbers from *a or randomly if a == NULL
	//n is size of array or count of adding elems
	void	addNumbers(int *a, size_t n, char print_flg);

	class spanIsFull : public std::exception
	{
		char const *what() const throw();
	};

	class thereIsNoSpan : public std::exception
	{
		char const *what() const throw();
	};
};

#endif