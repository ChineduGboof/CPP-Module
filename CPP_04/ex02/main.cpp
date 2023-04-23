/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboof <gboof@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:39:22 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 09:42:59 by gboof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	/*
		in the event that we uncomment the following code below it should
		display some error messages during compilation since we are trying to
		instantiate an object from a class with a pure virtual function, also
		known as an abstract class
	*/

	// const Animal k;
	// k.makeSound();
	// const Animal *l = new Animal;
	// l->makeSound();
	// delete l;

	std::cout << CYAN "Dog: ";
	j->makeSound();
	std::cout << CYAN "Cat: ";
	i->makeSound();

	delete i;
	delete j;

	return 0;
}