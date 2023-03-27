#include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	sp.addNumbers(NULL, 10002, 0);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span spClone(sp);
	std::cout << spClone.shortestSpan() << std::endl;
	std::cout << spClone.longestSpan() << std::endl;
	Span spClone2;
	try
	{
		std::cout << spClone2.shortestSpan() << std::endl;
		std::cout << spClone2.longestSpan() << std::endl;
	} catch (std::exception &e) {std::cout << e.what() << std::endl;}
	spClone2 = sp;
	std::cout << spClone.shortestSpan() << std::endl;
	std::cout << spClone.longestSpan() << std::endl;
	return 0;
}