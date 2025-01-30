/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:56:34 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/30 23:04:27 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <string>
# include <sstream>

template < typename T >
std::string const	easyfind( T &a, int i )
{
	std::ostringstream	oss;
	typename T::iterator	p;
	
	p = std::find( a.begin(), a.end(), i );
	if ( p == a.end() )
		return ( "Value not found." );
	else 
	{
		oss << i << " first occurrence at index " << std::distance(a.begin(), p);
		return( oss.str());
	}
}

#endif
