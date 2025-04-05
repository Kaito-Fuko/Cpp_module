#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
    // Dog basic;
    // {
    //     Dog tmp = basic;
    //     std::cout << "\033[92m" << "Type de basic : " << basic.getType() << "\033[0m" << std::endl;
    //     std::cout << "\033[33m" << "Type de tmp : " << tmp.getType() << "\033[0m" << std::endl;
    
    //     std::cout << "\033[92m" << "Son de basic : " << "\033[0m"; basic.makeSound();
    //     std::cout << "\033[33m" << "Son de tmp : " << "\033[0m"; tmp.makeSound();
    // }

    std::cout << "\033[1m" << "\n=== TEST AVEC ANIMAL, DOG, CAT ===" << "\033[0m" << std::endl;
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << "\033[92m" << "Type de i : " << i->getType() << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "Type de j : " << j->getType() << "\033[0m" << std::endl;

    std::cout << "\033[92m" << "Son de i : " << "\033[0m"; i->makeSound();
    std::cout << "\033[33m" << "Son de j : " << "\033[0m"; j->makeSound();
    std::cout << "Son de meta : " << "\033[0m"; meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << "\033[1m" << "\n=== TEST AVEC BRAIN DANS DOG ET CAT ===" << "\033[0m" << std::endl;
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "Manger");
    dog1->getBrain()->setIdea(1, "Jouer");
    std::cout << "\033[33m" << "Idée 0 du chien : " << dog1->getBrain()->getIdea(0) << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "Idée 1 du chien : " << dog1->getBrain()->getIdea(1) << "\033[0m" << std::endl;

    Cat* cat1 = new Cat();
    cat1->getBrain()->setIdea(0, "Dormir");
    std::cout << "\033[92m" << "Idée 0 du chat : " << cat1->getBrain()->getIdea(0) << "\033[0m" << std::endl;

    delete dog1;
    delete cat1;

    std::cout << "\033[1m" << "\n=== TEST AVEC TABLEAU D'ANIMAUX (DOGS & CATS) ===" << "\033[0m" << std::endl;
    const int size = 6;
    Animal* animals[size];
    
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();
    
    for (int i = 0; i < size; i++) {
        std::cout << "Animal " << i << " de type " << animals[i]->getType() << " fait : " << "\033[0m";
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < size; i++)
        delete animals[i];
    
    return 0;
}
