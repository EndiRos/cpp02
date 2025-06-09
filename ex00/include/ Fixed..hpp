/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Fixed..hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:50:35 by enetxeba          #+#    #+#             */
/*   Updated: 2025/06/09 10:26:41 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <math.h>

class Fixed
{
    public:
    Fixed(float raw);
    Fixed (Fixed& const other);
    Fixed& operator = (Fixed& const other);
    ~Fixed(){};
    
    int getRawBits(void) const ;
    void setRawBits( int const raw);
    
    Fixed& operator = (Fixed& other);
    
    private:
    int _raw;
    static int _fractional_bits = 8;
}

#endif