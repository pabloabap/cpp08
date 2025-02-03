//CABECERA

#include <deque>
#include <stack>
#include <iostream>

int	main( void )
{
	std::deque<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	mstack.push_back(0);
	std::deque<int>::iterator it = mstack.begin();
	std::deque<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::deque<int>::reverse_iterator rit = mstack.rbegin();
	std::deque<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack< int, std::deque<int> > s(mstack);
	return 0;
}
