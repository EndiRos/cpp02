/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Fixed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:02:56 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/09 11:12:06 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float raw)
{
    std::cout << "Constructor called not default value" << std::endl;
    _raw = static_cast <int> (round (raw * (1 << _fractional_bits)));
}
Fixed& operator= (Fixed& const other)
{
    if (this != other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        _raw = other._raw;
    }
    return *this;
}

Fixed::Fixed (Fixed& const other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_raw = other._raw;
}

Fixed::~Fixed(){}

void Fixed::setRawBits(int const raw)
{
    _raw = raw;
}

int Fixed::getRawBits(void) const
{
    return (_raw);
}