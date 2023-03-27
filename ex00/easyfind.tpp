#ifndef EASYFIND_TPP
#define EASYFIND_TPP

template <typename T>
typename T::iterator easyFind(T &a, int n)
{
	typename T::iterator res = find(a.begin(), a.end(), n);

	if (res == a.end())
		throw NotFoundException();
	return (res);
}
#endif