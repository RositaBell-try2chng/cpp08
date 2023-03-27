#include "Span.hpp"

Span::Span() : N(0), vec(std::vector<int>(0))
{
	this->curr_N = 0;
}

Span::~Span() {}

Span::Span(const Span &oth) : N(oth.getSize()), vec(std::vector<int>(oth.getVec()))
{
	this->curr_N = oth.curr_N;
}

Span::Span(unsigned int _N) : N(_N), vec(std::vector<int>(0))
{
	this->curr_N = 0;
}

std::vector<int> Span::getVec() const
{
	return (this->vec);
}

unsigned int Span::getSize() const
{
	return (this->N);
}

Span &Span::operator=(const Span &oth)
{
	this->N = oth.getSize();
	this->curr_N = oth.curr_N;
	this->vec = oth.getVec();
	return (*this);
}

void Span::addNumber(int a)
{
	if (this->curr_N == this->N)
		throw Span::spanIsFull();
	this->curr_N++;
	this->vec.push_back(a);
}

int Span::shortestSpan()
{
	if (this->curr_N < 2)
		throw Span::thereIsNoSpan();

	std::vector<int>	vec2(this->vec);
	std::vector<int>::iterator begin = vec2.begin();
	std::vector<int>::iterator end = vec2.end();
	std::sort(begin, end);

	int	res = *(begin + 1) - (*begin);
	for (std::vector<int>::iterator i = begin + 1; i < end - 1; i++)
	{
		if (*(i + 1) - *i < res)
			res = *(i + 1) - *i;
	}
	return (res);
}

int Span::longestSpan()
{
	if (this->curr_N < 2)
		throw Span::thereIsNoSpan();
	int min = *std::min_element(this->vec.begin(), this->vec.end());
	int max = *std::max_element(this->vec.begin(), this->vec.end());
	return (max - min);
}

const char *Span::spanIsFull::what() const throw()
{
	return ("Span is already full");
}

const char *Span::thereIsNoSpan::what() const throw()
{
	return ("there are less than 2 elements");
}

void Span::addNumbers(int *a, size_t n, char print_flg)
{
	srand(time(NULL));

	std::cout << "adding numbers start =========\n";

	for (size_t i = 0; i < n; i++)
	{
		try {
			if (a)
			{
				this->addNumber(a[i]);
				if (print_flg)
					std::cout << a[i] << " added\n";
			}
			else
			{
				int r = rand() % 100000;
				this->addNumber(r);
				if(print_flg)
					std::cout << r << " randomly added\n";
			}

		}
		catch (std::exception &e) {
			std::cout << "not added " << n - i << " values\n";
			std::cout << e.what() << std::endl;
			break;
		}
	}
	std::cout << "adding numbers end =========\n";
}