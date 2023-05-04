/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:31:42 by gboof             #+#    #+#             */
/*   Updated: 2023/05/04 20:34:40 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int random_num = std::rand() % 3;
    if (random_num == 0) {
        return new A();
    } else if (random_num == 1) {
        return new B();
    } else {
        return new C();
    }
}

// void identify(Base* p)
// {
//     if (dynamic_cast<A*>(p) != NULL) {
//         std::cout << "A" << std::endl;
//     } else if (dynamic_cast<B*>(p) != NULL) {
//         std::cout << "B" << std::endl;
//     } else if (dynamic_cast<C*>(p) != NULL) {
//         std::cout << "C" << std::endl;
//     } else {
//         std::cout << "Unknown type" << std::endl;
//     }
// }

// void identify(Base& p)
// {
//     try {
//         static_cast<void>(dynamic_cast<A&>(p));
//         std::cout << "A" << std::endl;
//     } catch (std::bad_cast& e) {}
//     try {
//         static_cast<void>(dynamic_cast<B&>(p));
//         std::cout << "B" << std::endl;
//     } catch (std::bad_cast& e) {}
//     try {
//         static_cast<void>(dynamic_cast<C&>(p));
//         std::cout << "C" << std::endl;
//     } catch (std::bad_cast& e) {}
// }

// int main()
// {
//     std::srand(std::time(0));

//     for (int i = 0; i < 10; ++i) {
//         Base* ptr = generate();
//         identify(ptr);
//         identify(*ptr);
//         delete ptr;
//     }

//     return 0;
// }

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
}