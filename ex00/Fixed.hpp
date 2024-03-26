/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrakman <rrakman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 22:25:20 by rrakman           #+#    #+#             */
/*   Updated: 2024/03/22 22:33:45 by rrakman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>

class Fixed {
	private:
		int fixed_number;
		static const int fractional_n = 8;
	public:
		Fixed();
		Fixed(const Fixed &instance);
		Fixed	&operator=(const Fixed &instance);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );		
};

