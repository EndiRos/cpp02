/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:26:50 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/10 12:51:19 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

Fixed sign(const Point& p1, const Point& p2, const Point& p3);
bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

int main()
{
    Point a;
    Point b(Fixed(10.25f), Fixed(0.0f));
    Point c(Fixed(14), Fixed(5.16458f));
    Point point(Fixed(9.1f), Fixed(15.8f));

    bool res = bsp(a, b, c, point);

    if (res)
        std::cout << "point is inside\n";
    else
        std::cout << "point is outside\n";

    return 0;
}