#include "MutantStack.hpp"

//subj test
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

//subj test with std::list instead MutantStack
//#include <list>
//int main()
//{
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << *(--mstack.end()) << std::endl;
//	mstack.erase(--mstack.end());
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737);
////[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite)
//	{
//		std::cout << *it << std::endl;
//		++it;
//	}
//	std::list<int> s(mstack);
//	return 0;
//}


//test const iterators
//int main()
//{
//	MutantStack<int> mstack;
//
//	mstack.push(42);
//	mstack.push(21);
//	MutantStack<int>::constIterator cb = mstack.begin();
//	std::cout << *cb << std::endl;
//	//*cb = 123;
//	MutantStack<int>::reverseIterator rb = mstack.rbegin();
//	std::cout << *rb << std::endl;
//	*rb = 54;
//	MutantStack<int>::constReverseIterator crb = mstack.rbegin();
//	std::cout << *crb << std::endl;
//	//*crb = 321;
//}

//all attr tests for mutant
//int main()
//{
//	MutantStack<std::string>	mstack;
//	std::string					str[] = {"Hello", "world", "!"};
//
//	std::cout << "is stack empty? " << mstack.empty() << std::endl;
//	for (int i = 0; i < 3; i++)
//		mstack.push(str[i]);
//	std::cout << "is stack empty? " << mstack.empty() << std::endl;
//	std::cout << "stack size is " << mstack.size() << std::endl;
//	std::cout << "clear mstack\n";
//	while (!mstack.empty())
//	{
//		std::cout << mstack.top() << std::endl;
//		mstack.pop();
//	}
//}

//all attr tests for std::stack
//int main()
//{
//	std::stack<std::string>	mstack;
//
//	std::string					str[] = {"Hello", "world", "!"};
//
//	std::cout << std::boolalpha << "is stack empty? " << mstack.empty() << std::endl;
//	for (int i = 0; i < 3; i++)
//		mstack.push(str[i]);
//	std::cout << std::boolalpha << "is stack empty? " << mstack.empty() << std::endl;
//	std::cout << "stack size is " << mstack.size() << std::endl;
//	std::cout << "clear mstack\n";
//	while (!mstack.empty())
//	{
//		std::cout << mstack.top() << std::endl;
//		mstack.pop();
//	}
//}