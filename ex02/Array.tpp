/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:37:05 by rjobert           #+#    #+#             */
/*   Updated: 2024/02/21 19:48:52 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



template <typename T>
Array<T>::Array()
{
	this->_arr = NULL;
	this->_size = 0;
}
/*
Parameterized constructor: Creates an array of 'n' elements, 
all value-initialized using new T[n]() instead of new T[n]
*/
template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_arr = new T[n]();
	this->_size = n;
}

template <typename T>
Array<T>::~Array()
{
	if (this->_arr != NULL)
	{
		delete[] _arr;
	}
}

/* Dynamic copy constructor*/
template <typename T>
Array<T>::Array(const Array<T>& src) :  _size(src.size())
{
	this->_arr = new T[_size];
	for (size_t i = 0; i < _size; ++i)
		_arr[i] = src._arr[i];
}

/* 
Dynamic memory allocation to ensure deep copy.
Including a delete if necessarry to avoid any leaks

*/
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& src)
{
	if (this != &src)
	{
		if (this->_arr)
			delete[] this->_arr;
			
		this->_arr = new T[src.size()];
		this->_size = src.size();
		
		for (size_t i = 0; i < _size; ++i)
			this->_arr[i] = src._arr[i];
	}
		return (*this); 
}


/************ Error Handler ***********************/
template <typename T>
Array<T>::RangeError::RangeError(const std::string& msg) : std::out_of_range(msg) {}


/************* Methods ******************************/
template <typename T>
T& Array<T>::operator[](unsigned int idx)
{
	if (idx >= this->_size)
	{
		std::string msg = "index out of range - index :";
		msg += std::to_string(idx);
		msg.append(" on array of size : ");
		msg += std::to_string(this->_size);
		throw Array<T>::RangeError(msg);
	}
	return (this->_arr[idx]);
}

/*
a const (in-and-out) implementation to allow a read-only 
array access
*/
template <typename T>
const T& Array<T>::operator[](unsigned int idx) const
{
	if (idx >= this->_size)
	{
		std::string msg = "index out of range - index :";
		msg += std::to_string(idx);
		msg.append(" on array of size : ");
		msg += std::to_string(this->_size);
		throw Array<T>::RangeError(msg);
	}
	return (this->_arr[idx]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr)
{
	for (size_t i = 0; i < arr.size(); ++i)
	{
		os << BLUE "[ " << i << " ] :" RESET;
		if (arr[i])
			os << CYAN "{ " << arr[i] << " } \n" RESET;
		else
			os << "{ NULL } \n";
	}
	os << std::endl;
	return (os);
}





