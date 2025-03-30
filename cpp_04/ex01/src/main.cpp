#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << "\n=== TEST AVEC ANIMAL, DOG, CAT ===" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "Type de i : " << i->getType() << std::endl;
    std::cout << "Type de j : " << j->getType() << std::endl;

    std::cout << "Son de i : "; i->makeSound();
    std::cout << "Son de j : "; j->makeSound();
    std::cout << "Son de meta : "; meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << "\n=== TEST AVEC WRONGANIMAL, WRONGCAT, WRONGDOG ===" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongAnimal* wrongDog = new WrongDog();
    
    std::cout << "Type de wrongCat : " << wrongCat->getType() << std::endl;
    std::cout << "Type de wrongDog : " << wrongDog->getType() << std::endl;
    
    std::cout << "Son de wrongCat : "; wrongCat->makeSound();
    std::cout << "Son de wrongDog : "; wrongDog->makeSound();
    std::cout << "Son de wrongMeta : "; wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;
    delete wrongDog;
	return (0);
}