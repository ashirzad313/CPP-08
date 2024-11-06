/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:52:23 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 17:15:55 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_TPP__
#define __EASYFIND_TPP__

#include "easyFind.hpp"

template <typename T>

typename T::iterator easyFind(T &container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw NoOccurance();
	return (it);

}

#endif // __EASYFIND_TPP__ //
