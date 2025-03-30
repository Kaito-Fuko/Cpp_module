#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* Wmeta = new WrongAnimal();
	const WrongAnimal* Wj = new WrongDog();
	const WrongAnimal* Wi = new WrongCat();
	
	std::cout << Wj->getType() << " " << std::endl;
	std::cout << Wi->getType() << " " << std::endl;
	
	Wi->makeSound(); //will output the cat sound!
	Wj->makeSound();
	Wmeta->makeSound();
	return (0);
}