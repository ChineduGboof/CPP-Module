/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:41:34 by gboof             #+#    #+#             */
/*   Updated: 2023/05/09 11:04:16 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"


// class Array {
//     private:
//         int* _arr;
//         unsigned int _size;

//     public:
//         Array();
//         Array(unsigned int n);
//         Array(Array const & other);
//         Array const & operator=(Array const & other);
//         ~Array();

//         int & operator[]( unsigned int const index);
//         int const & operator[]( unsigned int const index)const;
//         unsigned int size()const;
// };

template<typename T>
class Array{
    private:
        T * _arr;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(Array const & other);
        Array const & operator=(Array const & other);
        ~Array();

        T & operator[]( unsigned int const index);
        T const & operator[]( unsigned int const index)const;
        unsigned int size()const;
};

// template<typename T, unsigned int U>
// class Array{
//     private:
//         T * _arr;
//         unsigned int _size;

//     public:
//         Array();
//         Array(U n);
//         Array(Array const & other);
//         Array const & operator=(Array const & other);
//         ~Array();

//         T & operator[]( U const index);
//         T const & operator[]( U const index)const;
//         U size()const;
// };

#include "Array.tpp"

#endif