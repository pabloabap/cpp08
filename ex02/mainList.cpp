/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainList.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:16:31 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/02/04 09:16:34 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <stack>
#include <iostream>

int	main( void )
{
	std::list<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	mstack.push_back(0);
	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int>::reverse_iterator rit = mstack.rbegin();
	std::list<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack< int, std::list<int> > s(mstack);
	return 0;
}
