/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:50:13 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 17:21:33 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"

int main(void)
{
	std::vector<int> values = {42, 54, 76, 12};
	std::vector<int>::iterator it = easyFind(values, 54);
	std::cout << *it << std::endl;
	return (0);
}
