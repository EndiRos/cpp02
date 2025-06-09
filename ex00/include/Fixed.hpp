/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:50:35 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/09 12:48:44 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <math.h>
#include <iostream>

class Fixed
{
    public:
    Fixed();
    Fixed(float raw);
    Fixed (const Fixed& other);
    ~Fixed();
    
    Fixed& operator = (const Fixed&  other);
    
    
    int getRawBits(void) const ;
    void setRawBits( int const raw);
    float toFloat() const;
    int toInt() const;
    
    private:
    int _raw;
    static int _fractional_bits;
};

#endif