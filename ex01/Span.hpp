/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 23:11:30 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/31 02:25:19 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <stdexcept>
# include <deque>
# include <cmath>
# include <cstdlib>
# include <ctime>
# include <iostream>

class Span
{
	private:
		unsigned int		_max_size;
		std::deque<int>		_store;

		int			_getRange( void ) const;
	public:
		Span( void );
		Span( unsigned int N );
		Span( Span const &src );
		~Span( void );

		Span			&operator=( Span const &src );

		unsigned int const	&getMaxSize( void ) const;
		std::deque<int> const	&getStore( void ) const;

		void			addNumber( int num );
		unsigned int		shortestSpan( void ) const;
		unsigned int		longestSpan( void ) const;
		void			bulkRandomAddition( unsigned int size );
};

std::ostream	&operator<<( std::ostream &o, Span &s);

#endif
