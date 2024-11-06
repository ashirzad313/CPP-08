/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:50:48 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 17:21:38 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>

typename T::iterator easyFind(T &container, int i);

class NoOccurance : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
			return ("No occurance found");
		}
};

#include "easyFind.tpp"

#endif // __EASYFIND_HPP__//
