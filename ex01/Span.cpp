/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:11:32 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/31 02:51:46 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ): _max_size( 0 ){}

Span::Span( unsigned int N ): _max_size( N ){}

Span::Span( Span const &src ): _max_size( src._max_size ), _store ( src._max_size ) {}

Span::~Span( void ){}

/** Function to detect the range of values managed in the deque to set default
 * shortestSpan
 */ 
int	Span::_getRange( void ) const
{
	std::deque<int>::const_iterator	maxVal = this->_store.begin();
	std::deque<int>::const_iterator	minVal = this->_store.begin();

	for ( std::deque<int>::const_iterator it = this->_store.begin(); \
		it != this->_store.end() - 1; it++ )
	{
		if ( *maxVal < *it )
			maxVal = it;
		if ( *minVal > *it )
			minVal = it;
	}
	return ( *maxVal - *minVal );

}

Span	&Span::operator=( Span const &src )
{
	if ( this != &src )
	{
		this->_max_size = src._max_size;
		this->_store = src._store;
	}
	return ( *this );
}

unsigned int const	&Span::getMaxSize( void ) const
{
	return ( this->_max_size );
}

std::deque<int> const	&Span::getStore( void ) const
{
	return ( this->_store );
}

void		Span::addNumber( int num )
{
	if ( this->_store.size() < this->_max_size )
		this->_store.push_back( num );
	else
		throw std::overflow_error( "Span is full. Value not added.");
}
	
unsigned int	Span::shortestSpan( void ) const
{
	unsigned int	shortestJump;

	if ( this->_store.empty() || 2 > this->_store.size() )
		throw std::logic_error( "Span must have at least 2 items to find the shortest span.");
	else
	{
		shortestJump = this->_getRange();	
		for ( std::deque<int>::const_iterator it = this->_store.begin(); \
			it != this->_store.end() - 1; it++ )
		{
			if ( shortestJump > static_cast<unsigned int>(std::abs( *it - *(it + 1))))
			{
				shortestJump = std::abs( *it - *(it + 1));
				std::cout << "Nuevo shortest jump - " << *it << " to " \
					<< *(it + 1) << " = " << shortestJump << std::endl;
			}
		}
	}
	return ( shortestJump );		
}


unsigned int	Span::longestSpan( void ) const
{
	unsigned int	longestJump;

	longestJump = 0;	
	if ( this->_store.empty() || 2 > this->_store.size() )
		throw std::logic_error( "Span must have at least 2 items to find the longest span.");
	else
	{
		for ( std::deque<int>::const_iterator it = this->_store.begin(); \
			it != this->_store.end() - 1; it++ )
		if ( longestJump < static_cast<unsigned int>(std::abs( *it - *(it + 1))) )
		{
			longestJump = std::abs( *it - *(it + 1));
			std::cout << "Nuevo longest jump - " << *it << " to " \
				<< *(it + 1) << " = " << longestJump << std::endl;
		}
	}
	return ( longestJump );		
}

void		Span::bulkRandomAddition( unsigned int size )
{
	this->_store.clear();
	srand( time(NULL) );
	if ( size > this->_store.max_size() )
		throw std::out_of_range( "Requested size exceeds system deque max size.");
	this->_max_size = size;
	for ( unsigned int i = 0; i < size; i ++ )
		this->_store.push_back(rand() % 100000);
}


std::ostream	&operator<<( std::ostream &o, Span &s)
{
	o << "|- SIZE: " <<  s.getMaxSize() << "\n";
	o << "|- ITEMS: ";
	if ( !s.getStore().empty() )
	{
		for ( std::deque<int>::const_iterator it = s.getStore().begin(); it != s.getStore().end(); it ++)
			o << *it << " ";
	}
	return ( o );
}

