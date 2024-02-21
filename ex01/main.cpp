/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjobert <rjobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:38:55 by rjobert           #+#    #+#             */
/*   Updated: 2024/02/20 19:23:28 by rjobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// Example function to be used with iter
template <typename T>
void printElement(T& element) 
{
    std::cout << element << std::endl;
}

// Another example function that could be used with iter
template <typename T>
void incrementElement(T& element) 
{
    ++element;
}

template <>
void incrementElement<std::string>(std::string& str) 
{
    str.append("_modified");
}


int main() 
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::string strArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "\n Original intArray: \n";
    iter(intArray, 5, printElement<int>);
	
    std::cout << "Incremented intArray: \n";
    iter(intArray, 5, incrementElement<int>); // Increment each element
    iter(intArray, 5, printElement<int>); // Then print each element

    std::cout << "\n Original double Array: \n";
    iter(doubleArray, 5, printElement<double>);
	std::cout << "incremented doubleArray: \n";
    iter(doubleArray, 5, incrementElement<double>);
	iter(doubleArray, 5, printElement<double>);

	std::cout << "\n Original char Array: \n";
    iter(charArray, 5, printElement<char>);
	std::cout << "incremented doubleArray: \n";
    iter(charArray, 5, incrementElement<char>);
	iter(charArray, 5, printElement<char>);

    std::cout << "\n Original string Array: \n";
    iter(strArray, 5, printElement<std::string>);
	std::cout << "Printing doubleArray: \n";
    iter(strArray, 3, incrementElement<std::string>);
	iter(strArray, 5, printElement<std::string>);

    return 0;
}
