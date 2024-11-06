/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:43:28 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 21:32:24 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public :
		MutantStack(void);
		MutantStack(MutantStack &copy);
		MutantStack &operator=(MutantStack &other);
		~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif // __MUTANTSTACK_HPP__ //

