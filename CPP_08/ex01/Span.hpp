/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:35:48 by gboof             #+#    #+#             */
/*   Updated: 2023/05/10 15:57:10 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"

#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

class Span {
    private:
        unsigned int _N;
        std::vector<int> _data;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const & other);
        Span const & operator=(Span const & other);
        ~Span();

        void addNumber(int value);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        template<typename InputIt>
        void addNumber(InputIt first, InputIt last);

        void printNumbers();
};

template<typename InputIt>
void Span::addNumber(InputIt first, InputIt last) {
    if (_data.size() + std::distance(first, last) > _N) {
        throw std::out_of_range("Span is full, cannot add more elements");
    }
    _data.insert(_data.end(), first, last);
}


#endif