/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 01:42:10 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/31 02:53:56 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED	"\033[1;38;5;9m"
#define PINK	"\033[1;38;5;13m"
#define RESET	"\033[0m"

#include "Span.hpp"
#include <iostream>

int	main( void )
{
	Span	sp = Span(5);

	std::cout << PINK << "ADDING NUMBERS INDIVIDUALLY" << RESET << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << PINK << "ADDING NUMBER TO FULL SPAN" << RESET << std::endl;
	try
	{
		sp.addNumber(6);
	}
	catch( const std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << e.what() << RESET << std::endl;
	}

	std::cout << PINK << "RANDOM BULK UPLOAD" << RESET << std::endl;
	sp.bulkRandomAddition(10);

	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << PINK << "EMPTY SPAN" << RESET << std::endl;
	try
	{
		Span	emp;

		std::cout << emp << std::endl;
		std::cout << emp.shortestSpan() << std::endl;
		std::cout << emp.longestSpan() << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << e.what() << RESET << std::endl;
	}

	std::cout << PINK << "SPAN SIZE 1" << RESET << std::endl;
	try
	{
		Span	s1(1);

		s1.addNumber(-2147483648);	
		std::cout << s1 << std::endl;
		std::cout << s1.longestSpan() << std::endl;
		std::cout << s1.shortestSpan() << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << e.what() << RESET << std::endl;
	}

	std::cout << PINK << "GIGANT RANDOM BULK UPLOAD" << RESET << std::endl;
	try
	{
		sp.bulkRandomAddition(100000);

		std::cout << sp << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cout << RED << "EXCEPTION: " << e.what() << RESET << std::endl;
	}

	return ( 0 );
}
