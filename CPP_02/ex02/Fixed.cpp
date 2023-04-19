/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:47:24 by cegbulef          #+#    #+#             */
/*   Updated: 2023/04/19 11:47:55 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int value) : _value(value <<  _fracBits) {}

Fixed::Fixed(const float value) : _value(roundf(value * (1 <<  _fracBits))) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& other) : _value(other._value) {}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other) {
        this->_value = other._value;
    }
    return *this;
}

int Fixed::getRawBits() const {
    return _value;
}

void Fixed::setRawBits(const int raw) {
    _value = raw;
}

float Fixed::toFloat() const {
    return static_cast<float>(_value) / (1 <<  _fracBits);
}

int Fixed::toInt() const {
    return _value >>  _fracBits;
}

bool Fixed::operator>(const Fixed& other) const {
    return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return _value != other._value;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() { // pre-increment
    _value += 1;
    return *this;
}

Fixed Fixed::operator++(int) { // post-increment
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() { // pre-decrement
    _value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) { // post-decrement
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}