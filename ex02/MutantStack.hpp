/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:16:48 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/02/04 09:16:52 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <stack>

template <typename T>
class	MutantStack: public std::stack<T>
{
	public:
		typedef typename MutantStack<T>::container_type::iterator		iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator	reverse_iterator;

		MutantStack( void );
		MutantStack( MutantStack const &src );
		~MutantStack( void );
		
		MutantStack	&operator=( MutantStack const &src );
	
		iterator		begin( void );
		iterator		end( void );
		reverse_iterator	rbegin( void );
		reverse_iterator	rend( void );
};

# include "MutantStack.tpp"
#endif
