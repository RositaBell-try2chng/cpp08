#include "easyfind.hpp"

template <typename T>
void tryToFound(T &a, int n)
{
	try
	{
		std::cout << *easyfind(a, n) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main( void )
{
	std::vector<int>			cont;
	for (int i = 0; i < 100; i++)
		cont.push_back(i * i);
	tryToFound(cont, 4);
	tryToFound(cont, 224);
}