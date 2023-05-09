/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:25:45 by gboof             #+#    #+#             */
/*   Updated: 2023/05/08 20:20:15 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T >
void print( T const & x ) 
{ std::cout << GREEN << x << DEFAULT << std::endl; return; }

int main()
{
    std::string arr[] = {"Hello", "World", "Jesus", "is", "coming"};
    int arr2[] = {1900, 1910, 1920, 1930};
    float arr3[] = {1900.2, 1910.5, 1920.8, 1930.4};

    size_t arrlen = sizeof(arr) / sizeof(arr[0]);
    size_t arrlen2 = sizeof(arr2) / sizeof(arr2[0]);
    size_t arrlen3 = sizeof(arr3) / sizeof(arr3[0]);

    ::iter(arr, arrlen, print);
    ::iter(arr2, arrlen2, print);
    ::iter(arr3, arrlen3, print);
    return 0;
}


// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << GREEN << rhs.get() << DEFAULT; return o; }

// template< typename T >
// void print( T const & x ) { std::cout << GREEN << x << DEFAULT << std::endl; return; }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//   Awesome tab2[5];

//   iter( tab, 5, print<int> );
//   iter( tab2, 5, print<Awesome> );

//   return 0;
// }