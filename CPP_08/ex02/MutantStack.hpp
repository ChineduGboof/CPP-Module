/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:55:37 by gboof             #+#    #+#             */
/*   Updated: 2023/05/10 18:55:38 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"

#include <iostream>
#include <stack>


/*
Now, time to move on more serious things. Let’s develop something weird.
The std::stack container is very nice. 
Unfortunately, it is one of the only STL Containers that is NOT iterable. That’s too bad.
But why would we accept this? Especially if we can take the liberty of butchering the
original stack to create missing features.
To repair this injustice, you have to make the std::stack container iterable.
Write a MutantStack class. It will be implemented in terms of a std::stack.
It will offer all its member functions, plus an additional feature: iterators.
Of course, you will write and turn in your own tests to ensure everything works as
expected.
*/

template <typename T>
class MutantStack : public std::stack<T> {
    public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() {
        return std::stack<T>::c.begin();
    }
    iterator end() {
        return std::stack<T>::c.end();
    }

};


#endif