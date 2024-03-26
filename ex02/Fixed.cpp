/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:25:18 by rrakman           #+#    #+#             */
/*   Updated: 2024/03/23 22:11:17 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	fixed_number = 0;
}

Fixed::Fixed(const Fixed &instance)
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = instance;
}

Fixed	&Fixed::operator=(const Fixed &instance)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &instance){
		fixed_number = instance.fixed_number;
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return fixed_number;
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->fixed_number = raw;	
}

int Fixed::shift( void ) const
{
	int shift = 1;
	for(int i = 0; i < fractional_n; i++)
		shift *= 2;
	return shift;
}

Fixed::Fixed( int const num)
{
	std::cout<<"Int constructor called"<<std::endl;
	fixed_number = num * shift();
}
Fixed::Fixed( float const num)
{
	std::cout<<"Float constructor called"<<std::endl;
	fixed_number = roundf(num * shift());
}

float Fixed::toFloat( void ) const
{
	return (float) fixed_number/shift();
}

int Fixed::toInt( void ) const
{
	return fixed_number/shift();
}

std::ostream & operator<<(std::ostream & output, Fixed const & instance)
{
	output << instance.toFloat();
	return output;
}