/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:25:20 by rrakman           #+#    #+#             */
/*   Updated: 2024/03/28 23:34:00 by rrakman          ###   ########.fr       */
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
		
		bool operator>(const Fixed &instance) const;
		bool operator<(const Fixed &instance) const;
		bool operator>=(const Fixed &instance) const;
		bool operator<=(const Fixed &instance) const;
		bool operator==(const Fixed &instance) const;
		bool operator!=(const Fixed &instance) const;
		
		Fixed operator+(const Fixed &instance) const;
		Fixed operator-(const Fixed &instance) const;
		Fixed operator*(const Fixed &instance) const;
		Fixed operator/(const Fixed &instance) const;
		
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<(std::ostream & output, Fixed const & instance);
