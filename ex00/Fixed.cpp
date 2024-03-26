/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:25:18 by rrakman           #+#    #+#             */
/*   Updated: 2024/03/22 22:35:37 by rrakman          ###   ########.fr       */
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
	std::cout << "Copy constructor called"<<std::endl;
	*this = instance;
}
Fixed	&Fixed::operator=(const Fixed &instance)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &instance){
		fixed_number = instance.getRawBits();
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
	return this->fixed_number;
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->fixed_number = raw;	
}
