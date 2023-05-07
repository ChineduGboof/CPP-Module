/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 08:44:49 by gboof             #+#    #+#             */
/*   Updated: 2023/05/07 08:50:08 by gboof            ###   ########.fr       */
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
    if (aPtr)
    {
        std::cout << "Pointer identified as A" << std::endl;
        return;
    }
    const B *bPtr = dynamic_cast<B *>(p);
    if (bPtr)
    {
        std::cout << "Pointer identified as B" << std::endl;
        return;
    }
    const C *cPtr = dynamic_cast<C *>(p);
    if (cPtr)
    {
        std::cout << "Pointer identified as C" << std::endl;
        return;
    }
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Reference identified as A" << std::endl;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "Reference identified as B" << std::endl;
    }
    catch (const std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "Reference identified as C" << std::endl;
    }
    catch (const std::exception &e)
    {
    }
}