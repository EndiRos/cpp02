/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:02:56 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/10 09:44:00 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_fractional_bits = 8; // Inicialización del miembro estático constante

Fixed::Fixed() : _raw(0)
{
    ;
}
Fixed::Fixed(int raw)
{
    _raw = raw  << _fractional_bits;
}

Fixed::Fixed(float raw)
{
    _raw = static_cast <int> (round (raw * (1 << _fractional_bits)));
}

Fixed& Fixed::operator= (const Fixed& other)
{
    if (this != &other)
    {
        this->_raw = other.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;  
}

Fixed::~Fixed()
{
}

void Fixed::setRawBits(int const raw)
{
    _raw = raw;
}

int Fixed::getRawBits(void) const
{
    return (_raw);
}

float  Fixed::toFloat() const
{
    return  static_cast <float>( _raw) / (1 << _fractional_bits);
}

int Fixed::toInt() const
{
    return _raw >> _fractional_bits;
}

std::ostream& operator << (std::ostream& os, const Fixed& other)
{
    os << other.toFloat();
    return os; 
}

bool operator == (const Fixed& first, const Fixed& second)
{
    return (first.toFloat()== second.toFloat());
}

bool operator != (const Fixed& first, const Fixed& second)
{
    return (first.toFloat()!= second.toFloat());
}

bool operator < (const Fixed& first, const Fixed& second)
{
    return (first.toFloat() < second.toFloat());
}

bool operator <= (const Fixed& first, const Fixed& second)
{
    return (first.toFloat()<= second.toFloat());
}

bool operator > (const Fixed& first, const Fixed& second)
{
    return (first.toFloat() > second.toFloat());
}

bool operator >= (const Fixed& first, const Fixed& second)
{
    return (first.toFloat()>= second.toFloat());
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - (const Fixed& other) const
{
    return Fixed (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator* (const Fixed& other) const
{
    return Fixed (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / (const Fixed& other) const
{
    if (other.toFloat() == 0)
        return Fixed();
    return Fixed (this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator ++()
{
    Fixed& tmp = *this;
    _raw ++;
    return tmp; 
}

Fixed Fixed::operator ++(int)
{
    _raw ++;
    return *this;
}

Fixed& Fixed::operator --()
{
    Fixed& tmp = *this;
    _raw --;
    return tmp; 
}

Fixed Fixed::operator --(int)
{
    _raw --;
    return *this;
}

Fixed& Fixed::min (Fixed& a, Fixed& b)
{
    return ((a < b) ? a : b);
}
const Fixed& Fixed::min (const Fixed& a, const Fixed& b)
{
    return ((a < b) ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return ((a > b) ? a : b);
}
const Fixed& Fixed::max (const Fixed& a, const Fixed& b) 
{
    return ((a > b) ? a : b);
}

