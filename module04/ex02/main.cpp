/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:56:12 by mavinici          #+#    #+#             */
/*   Updated: 2022/03/29 11:21:49 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./previous/Cat.hpp"
#include "./previous/Dog.hpp"
#include "./previous/AAnimal.hpp"
#include "Brain.hpp"

void	brains(void) {
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}
	
	std::cout << std::endl;
	
	{
		int len = 4;
		AAnimal **Aanimals = new AAnimal*[len];
		
		for (int i = 0; i < len; i++) {
			if (i >= len / 2)
				Aanimals[i] = new Dog();
			else
				Aanimals[i] = new Cat();
		}
		
		std::cout << std::endl;

		for (int i = 0; i < len; i++) {
			delete Aanimals[i];
		}
		
		delete [] Aanimals;
	}

	std::cout << std::endl;
}

void	deep_or_shallow(void) {
	Cat* Cat1 = new Cat();
	std::cout << std::endl;

	Cat1->setIdeas(0, "Derruba as parada");
	std::cout << "Ideia 1 = " << Cat1->getIdeas(0) << "\n";


	Cat* Cat2 = new Cat(*Cat1);

	std::cout << "Ideia 2 = " << Cat2->getIdeas(0) << "\n";
	Cat2->setIdeas(0, "Ser um bom gatinho");
	std::cout << std::endl;


	std::cout
		<< "Ideia final 1 = " << Cat1->getIdeas(0) << std::endl
		<< "Ideia final 2 = " << Cat2->getIdeas(0) << std::endl;

	delete Cat1;
	delete Cat2;
}

int		main(void) {
	brains();
	deep_or_shallow();
	// AAnimal *a = new AAnimal();
	return (0);
}