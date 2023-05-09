/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:02:10 by gboof             #+#    #+#             */
/*   Updated: 2023/05/09 07:42:29 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#ifndef ARRAY_TPP
#define ARRAY_TPP

/*
Construction with no parameter: Creates an empty array.
*/

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

/*
• Construction with an unsigned int n as a parameter: Creates an array of n elements
initialized by default.
*/

template<typename T>
Array<T>::Array(unsigned int n): _arr(new T[n]), _size(n) {}

/*
• Construction by copy and assignment operator. In both cases, modifying either the
original array or its copy after copying musn’t affect the other array.
*/

template<typename T>
Array<T>::Array(Array const & other) : _arr(NULL), _size(other.size()) {
    _arr = new T[other.size()];
    if (_arr == NULL) {
        throw std::bad_alloc();
    }
    for (unsigned int i = 0; i < other.size(); i++) {
        _arr[i] = other._arr[i];
    }
}

template<typename T>
Array<T> const & Array<T>::operator=(Array const & other) {
    if (this != &other) {
        T* temp = new T[other.size()];
        if (temp == NULL) {
            throw std::bad_alloc();
        }
        for (unsigned int i = 0; i < other.size(); i++) {
            temp[i] = other._arr[i];
        }
        delete[] _arr;
        _arr = temp;
        _size = other.size();
    }
    return *this;
}

template<typename T>
Array<T>::~Array(){ delete[] _arr; }

/*
• You MUST use the operator new[] to allocate memory. 
Preventive allocation (allocating memory in advance) is forbidden. 
Your program must never access nonallocated memory.
• Elements can be accessed through the subscript operator: [ ].
• When accessing an element with the [ ] operator, if its index is out of bounds, an
std::exception is thrown.
*/

template<typename T>
T & Array<T>::operator[](unsigned int const index) {
    if (index >= _size) {
        throw std::out_of_range("Index is beyond boundaries");
    }
    return _arr[index];
}

template<typename T>
T const & Array<T>::operator[](unsigned int const index)const {
    if (index >= _size) {
        throw std::out_of_range("Index is beyond boundaries");
    }
    return _arr[index];
}

/*
• A member function size() that returns the number of elements in the array. This
member function takes no parameter and musn’t modify the current instance.
*/

template<typename T>
unsigned int Array<T>::size()const{ return (_size); }

#endif