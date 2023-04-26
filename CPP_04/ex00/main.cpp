/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 20:54:37 by gboof             #+#    #+#             */
/*   Updated: 2023/04/25 09:44:58 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void doSubjectTests() {
	const Animal *meta = new Animal;
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	std::cout << CYAN << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << DEFAULT;

	delete i;
	delete j;
	delete meta;
}

void doWrongAnimalTests() {
	const WrongAnimal *wrongAnimal = new WrongAnimal;
	const WrongAnimal *wrongCat = new WrongCat;

	std::cout << CYAN << wrongAnimal->getType() << ": ";
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound();
	std::cout << DEFAULT;

	delete wrongCat;
	delete wrongAnimal;
}

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nWrong Animal Tests" DEFAULT << std::endl;
	doWrongAnimalTests();

	return 0;
}

