/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:30:29 by ashirzad          #+#    #+#             */
/*   Updated: 2024/11/06 20:23:36 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constrcutors

Span::Span(void) : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(Span &copy) : _n(copy._n), _vec(copy._vec) {*this = copy;}

Span &Span::operator=(Span &other)
{
	if (this == &other)
		return (*this);
	this->_n = other._n;
	this->_vec = other._vec;
	return (*this);
}

Span::~Span(void) {}

// methods //

void	Span::addNumber(int n)
{
	if (this->_vec.size() >= this->_n)
		throw FullError();
	this->_vec.push_back(n);
}

int	Span::shortestSpan(void)
{
	if (this->_vec.size() <= 1)
		throw SpanError();

	std::sort(this->_vec.begin(), this->_vec.end());
	std::vector<int>::iterator it;
	int shortest = this->_vec[1] - this->_vec[0];
	for (it = this->_vec.begin(); (it + 1) != this->_vec.end(); it++)
	{
		if (shortest > *(it + 1) - *it)
			shortest = *(it + 1) - *it;
	}
	return (shortest);
}

int	Span::longestSpan(void)
{
	if (this->_vec.size() <= 1)
		throw SpanError();

	std::sort(this->_vec.begin(), this->_vec.end());
	int longest = this->_vec[this->_vec.size() - 1] - this->_vec[0];
	return (longest);
}

// error

const char *Span::FullError::what() const throw()
{
	return ("No more space");
}

const char *Span::SpanError::what() const throw()
{
	return ("Not enough elements in container");
}


