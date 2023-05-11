/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 06:02:10 by gboof             #+#    #+#             */
/*   Updated: 2023/05/09 11:04:00 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n): _arr(NULL), _size(n) {
    _arr = new T[n];
    if (_arr == NULL) {
        throw std::bad_alloc();
    }
}

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

template<typename T>
T & Array<T>::operator[](unsigned int const index) {
    if (index < 0 || index >= _size) {
        throw std::out_of_range("Index is beyond boundaries");
    }
    return _arr[index];
}

template<typename T>
T const & Array<T>::operator[](unsigned int const index)const {
    if (index < 0 || index >= _size) {
        throw std::out_of_range("Index is beyond boundaries");
    }
    return _arr[index];
}

template<typename T>
unsigned int Array<T>::size()const{ return (_size); }

#endif