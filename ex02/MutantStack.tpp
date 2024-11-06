/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:50:13 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 21:08:57 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_TPP__
#define __MUTANTSTACK_TPP__

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>(){}

template <typename T>
MutantStack<T>::MutantStack(MutantStack &copy) : std::stack<T>(copy)
{
	*this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack &other)
{
	if (this == &other)
		return (*this);
	std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void){}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (std::stack<T>::c.end());
}

#endif // __MUTANTSTACK_TPP__ //
