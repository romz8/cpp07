/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:21:36 by rjobert           #+#    #+#             */
/*   Updated: 2024/02/21 19:47:22 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdio>
# include <iostream>
# include <stdexcept>
# include <Array.h>

template <typename T>

class Array
{
private:
	T * _arr;
	unsigned int _size;
public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array& src);
	Array<T>& operator=(const Array& src);
	unsigned int size() const;
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	
	class RangeError : public std::out_of_range
	{
		public:
			RangeError(const std::string& msg);
	};
};

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr);
# include "Array.tpp"

#endif
