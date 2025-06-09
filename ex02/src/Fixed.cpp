/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:02:56 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/09 13:48:09 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::_fractional_bits = 8; // Inicialización del miembro estático constante

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(int raw)
{
    std::cout << "Integer constructor called" << std::endl;
    _raw = raw  << _fractional_bits;
}

Fixed::Fixed(float raw)
{
    std::cout << "float constructor called" << std::endl;
    _raw = static_cast <int> (round (raw * (1 << _fractional_bits)));
}

Fixed& Fixed::operator= (const Fixed& other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->_raw = other.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;  
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
    _raw = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function call" << std::endl; 
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
