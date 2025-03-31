#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << "\033[1m" << "\n=== TEST AVEC ANIMAL, DOG, CAT ===" << "\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "\033[92m" << "Type de i : " << i->getType() << "\033[0m" << std::endl;
    std::cout << "\033[0;33m" << "Type de j : " << j->getType() << std::endl;

    std::cout << "\033[92m" << "Son de i : " << "\033[0m";
    i->makeSound();
    std::cout << "\033[0;33m" << "Son de j : " << "\033[0m";
    j->makeSound();
    std::cout << "Son de meta : " << "\033[0m";
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << "\033[1m" << "\n=== TEST AVEC WRONGANIMAL, WRONGCAT, WRONGDOG ===" << "\033[0m" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    const WrongAnimal* wrongDog = new WrongDog();
    
    std::cout << "\033[92m" << "Type de wrongCat : " << wrongCat->getType() << "\033[0m" << std::endl;
    std::cout << "\033[0;33m" << "Type de wrongDog : " << wrongDog->getType() << "\033[0m" << std::endl;
    
    std::cout << "\033[92m" << "Son de wrongCat : " << "\033[0m";
    wrongCat->makeSound();
    std::cout << "\033[0;33m" << "Son de wrongDog : " << "\033[0m";
    wrongDog->makeSound();
    std::cout << "Son de wrongMeta : " << "\033[0m";
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;
    delete wrongDog;
	return (0);
}