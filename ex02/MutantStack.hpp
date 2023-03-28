#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>() {}
	MutantStack<T>(MutantStack const &oth) {*this = oth;}
	~MutantStack<T>() {}

	MutantStack<T> &operator=(MutantStack<T> const &oth) {
		(static_cast< std::stack<T> >(*this)) = (static_cast< std::stack<T> >(oth));
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) {return (this->c.begin());}
	iterator end(void) {return (this->c.end());}

	typedef typename std::stack<T>::container_type::const_iterator constIterator;
	constIterator begin(void) const {return (this->c.begin());}
	constIterator end(void) const {return (this->c.end());}

	typedef typename std::stack<T>::container_type::reverse_iterator reverseIterator;
	reverseIterator rbegin(void) {return (this->c.rbegin());}
	reverseIterator rend(void) {return (this->c.rend());}

	typedef typename std::stack<T>::container_type::const_reverse_iterator constReverseIterator;
	constReverseIterator rbegin(void) const {return (this->c.rbegin());}
	constReverseIterator rend(void) const {return (this->c.rend());}
};
#endif