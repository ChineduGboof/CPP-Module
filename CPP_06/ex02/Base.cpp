/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 08:44:49 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 10:23:32 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
    std::srand(std::time(NULL));
    const size_t choice = std::rand() % 3;
    switch (choice)
    {
    case 0:
        std::cout << "Generated A" << std::endl;
        return (new A());
    case 1:
        std::cout << "Generated B" << std::endl;
        return (new B());
    case 2:
        std::cout << "Generated C" << std::endl;
        return (new C());
    default:
        return (0);
    }
}

void identify(Base *p)
{
    const A *aPtr = dynamic_cast<A *>(p);
    if (aPtr){
        std::cout << GREEN << "Pointer A" << DEFAULT << std::endl;
        return;
    }
    const B *bPtr = dynamic_cast<B *>(p);
    if (bPtr) {
        std::cout << GREEN << "Pointer B" << DEFAULT << std::endl;
        return;
    }
    const C *cPtr = dynamic_cast<C *>(p);
    if (cPtr) {
        std::cout << GREEN << "Pointer C" << DEFAULT << std::endl;
        return;
    }
}

void identify(Base &p)
{
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << GREEN << "Reference A" << DEFAULT << std::endl;
    }
    catch (const std::exception &e){
    }
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << GREEN << "Reference B" << DEFAULT << std::endl;
    }
    catch (const std::exception &e){
    }
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << GREEN << "Reference C" << DEFAULT << std::endl;
    }
    catch (const std::exception &e){
    }
}