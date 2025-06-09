/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:26:50 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/09 13:10:45 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) 
{
Fixed a;
//a = 1526.354673333333;
Fixed b( a );
Fixed c;
c = b;
//c = 200.12568;
std::cout << a.getRawBits() << std::endl;
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
/* std::cout << a.toFloat() << std::endl;
std::cout << b.toFloat() << std::endl;
std::cout << c.toFloat() << std::endl;
std::cout << a.toInt() << std::endl;
std::cout << b.toInt() << std::endl;
std::cout << c.toInt() << std::endl; */

return 0;
}