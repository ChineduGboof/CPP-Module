/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:35:55 by gboof             #+#    #+#             */
/*   Updated: 2023/05/10 15:50:03 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << YELLOW << "REGULAR TEST" << DEFAULT << std::endl;
    try{
        Span sp = Span(8);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(6);
        sp.addNumber(-2);
        sp.addNumber(-1);
        sp.printNumbers();
        std::cout << "Shortest Span: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span: " << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << YELLOW << "TEST TO CHECK FULL SPAN EXCEPTION" << DEFAULT << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << YELLOW << "TEST TO CHECK EMPTY SPAN EXCEPTION" << DEFAULT << std::endl;
    try{
        Span sp = Span(3);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << YELLOW << "TEST TO CHECK ONLY ONE SPAN EXCEPTION" << DEFAULT << std::endl;
    try{
        Span sp = Span(3);
        sp.addNumber(6);
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << YELLOW << "TEST TO CHECK MULTIPLE NUMBERS" << DEFAULT << std::endl;
    try{
        std::vector<int> myVector;
        Span sp(10000);

        for (int i = 0; i < 10000; i++) {
            myVector.push_back(i);
        }
        sp.addNumber(myVector.begin(), myVector.end());
        std::cout << GREEN << "Shortest Span: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest  Span: " << sp.longestSpan() << DEFAULT << std::endl;
        sp.addNumber(50);

    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}


