/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:28:22 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 20:07:48 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private :
		unsigned int	_n;
		std::vector<int>	_vec;
	public :
		// Constrcutors
		Span(void);
		Span(unsigned int n);
		Span(Span &copy);
		Span &operator=(Span &other);
		~Span(void);

		// methods //
		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

		class FullError : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class SpanError : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
};

#endif // _SPAN_HPP__ //
