/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainjobert <romainjobert@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 22:11:23 by romainjober       #+#    #+#             */
/*   Updated: 2024/02/19 22:32:37 by romainjober      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap(T& a, T& b)
{
    T temp = b;
    b = a;
    a = temp;
}

template <typename T>
T min(const T& a, const T& b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T max(const T& a, const T& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif

