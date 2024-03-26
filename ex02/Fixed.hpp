/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:25:20 by rrakman           #+#    #+#             */
/*   Updated: 2024/03/23 22:10:50 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<cmath>

class Fixed {
	private:
		int fixed_number;
		static const int fractional_n = 8;
	public:
		Fixed();
		Fixed( int const num);	
		Fixed( float const num);
		Fixed(const Fixed &instance);
		Fixed	&operator=(const Fixed &instance);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int shift( void ) const;
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<(std::ostream & output, Fixed const & instance);
