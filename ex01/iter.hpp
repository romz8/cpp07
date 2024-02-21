/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:33:06 by rjobert           #+#    #+#             */
/*   Updated: 2024/02/20 18:44:06 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdio>
# include <iostream>

template <typename T, typename F>

void	iter(T* arr, size_t size, F func)
{
	if (!arr)
		return ;
	for (size_t i = 0; i < size; i++)
		func(arr[i]);
}

#endif
