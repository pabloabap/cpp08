//CABECERA

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ): std::stack<T>(){};

template <typename T>
MutantStack<T>::MutantStack( MutantStack<T> const &src ): std::stack<T>(src) {}

template <typename T>
MutantStack<T>::~MutantStack( void ){}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=( MutantStack<T> const &src )
{
	if ( this != *src )
		this = src;
	return ( *this );
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin( void )
{
	return ( this->c.begin() );
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end( void )
{
	return ( this->c.end() );
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin( void )
{
	return ( this->c.rbegin() );
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend( void )
{
	return ( this->c.rend() );
}

