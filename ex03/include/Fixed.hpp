/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:50:35 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/10 09:15:46 by enetxeba         ###   ########.fr       */
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
    explicit Fixed(float raw);
    Fixed(int raw);
    Fixed (const Fixed& other);
    ~Fixed();
    
    Fixed& operator = (const Fixed&  other);
    
    
    int getRawBits(void) const ;
    void setRawBits( int const raw);
    float toFloat() const;
    int toInt() const;

    friend std::ostream& operator << (std::ostream& os, const Fixed& other);

    friend bool operator == (const Fixed& first, const Fixed& second);
    friend bool operator != (const Fixed& first, const Fixed& second);
    friend bool operator < (const Fixed& first, const Fixed& second);
    friend bool operator <= (const Fixed& first, const Fixed& second);
    friend bool operator > (const Fixed& first, const Fixed& second);
    friend bool operator >= (const Fixed& first, const Fixed& second);
    

    Fixed operator + (const Fixed& other) const;
    Fixed operator - (const Fixed& other) const ;
    Fixed operator * (const Fixed& other) const;
    Fixed operator / (const Fixed& other) const;
    
    Fixed& operator ++();
    Fixed operator ++(int);
    Fixed& operator --();
    Fixed operator --(int);

    static Fixed& min (Fixed& a, Fixed& b);
    static const Fixed& min (const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max (const Fixed& a, const Fixed& b);  
    
    private:
    int _raw;
    static int _fractional_bits;
};

#endif