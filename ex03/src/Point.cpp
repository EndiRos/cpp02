/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:09:56 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/10 10:59:32 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y)
{
    ;
}
Point::~Point(){}

Point& Point::operator=(const Point& other)
{
    if (this != &other)    
    {
        this->_x = other._x;
        this->_y = other._y;
    }
    return *this;
}

Point::Point (const Point& other) : _x(other._x), _y(other._y){}

Fixed Point::get_x()const
{
    return _x;
}

Fixed Point::get_y()const
{
    return _y;
}

void Point::set_x(Fixed& x)
{
    this->_x = x;
    return ;
}

void Point::set_y(Fixed& y)
{
    this->_y = y;
    return ;
}