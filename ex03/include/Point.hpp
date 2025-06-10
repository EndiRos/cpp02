/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 09:53:23 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/10 11:00:26 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
class Point
{
private:
    Fixed _x;
    Fixed _y;
    
public:
    Point();
    Point(const Fixed& x,const Fixed& y);
    Point(const Point& other);
    ~Point();

    Point& operator=(const Point& other);
    
    Fixed   get_x() const;
    Fixed   get_y() const;
    
    void   set_x(Fixed& x);
    void   set_y(Fixed& y);
};


