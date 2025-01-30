/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:38:43 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 23:04:03 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <deque>
#include <list>
#include <iostream>

#include "easyfind.hpp"

std::ostream &	operator<<(std::ostream &o, std::vector<int> &container);
std::ostream &	operator<<(std::ostream &o, std::deque<int> &container);
std::ostream &	operator<<(std::ostream &o, std::list<int> &container);

int	main( void )
{
	int	arr[]={1,2,3,4,5,6,7,8,9,0,0,9,8,7,6,5,4,3,2,1};
	std::vector<int> v(arr, arr + sizeof(arr) / sizeof( int ));
	std::deque<int> d(arr, arr + sizeof(arr) / sizeof( int ));
	std::list<int> l(arr, arr + sizeof(arr) / sizeof( int ));

	std::cout << "VECTOR: " << v << "\n"
		<< "|- Int to find: 10" << "\n"
		<< "|- Result: " << easyfind(v, 10) << std::endl;

	std::cout << "DEQUE: " << d << "\n"
		<< "|- Int to find: 9" << "\n"
		<< "|- Result: " << easyfind(d, 9) << std::endl;

	std::cout << "LIST: " << l << "\n"
		<< "|- Int to find: 0" << "\n"
		<< "|- Result: " << easyfind(l, 0) << std::endl;

	return ( 0 );
}

std::ostream &	operator<<(std::ostream &o, std::vector<int> &container)
{
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); it ++)
		o << *it << " ";
	return ( o );
}

std::ostream &	operator<<(std::ostream &o, std::deque<int> &container)
{
	for (std::deque<int>::iterator it = container.begin(); it != container.end(); it ++)
		o << *it << " ";
	return ( o );
}

std::ostream &	operator<<(std::ostream &o, std::list<int> &container)
{
	for (std::list<int>::iterator it = container.begin(); it != container.end(); it ++)
		o << *it << " ";
	return ( o );
}
