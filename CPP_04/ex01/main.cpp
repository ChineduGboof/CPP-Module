/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cegbulef <cegbulef@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:39:22 by gboof             #+#    #+#             */
/*   Updated: 2023/04/23 19:57:14 by cegbulef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

void doSubjectTests() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete i;
	delete j;
}

void doArrayTests() {
	int size = 6;
	const Animal *array[size];

	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			array[i] = new Dog;
		} else {
			array[i] = new Cat;
		}
	}
	for (int i = size - 1; i > -1; i--) {
		delete array[i];
	}
}

void doDeepCopyTests() {
	Dog dog;
	std::cout << CYAN "Dog: ";
	dog.makeSound();
	
	Dog dogCopy(dog);
	std::cout << CYAN "Dog Clone: ";
	dogCopy.makeSound();

	Cat cat;
	std::cout << CYAN "Cat: ";
	cat.makeSound();

	Cat catCopy = cat;
	std::cout << CYAN "Cat Clone: ";
	catCopy.makeSound();
}

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nAnimal Array Tests" DEFAULT << std::endl;
	doArrayTests();
	std::cout << YELLOW "\nDeep Copy Tests" DEFAULT << std::endl;
	doDeepCopyTests();

	return 0;
}
