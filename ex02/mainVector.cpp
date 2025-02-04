/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainVector.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:16:37 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/02/04 09:16:40 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stack>
#include <iostream>

int	main( void )
{
	std::vector<int>	mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);

	mstack.push_back(0);
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::vector<int>::reverse_iterator rit = mstack.rbegin();
	std::vector<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack< int, std::vector<int> > s(mstack);
	return 0;
}
