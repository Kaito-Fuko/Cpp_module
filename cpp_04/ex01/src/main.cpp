#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main() {
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

    std::cout << "\n=== TEST AVEC BRAIN DANS DOG ET CAT ===" << std::endl;
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "Manger");
    dog1->getBrain()->setIdea(1, "Jouer");
    std::cout << "Idée 0 du chien : " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Idée 1 du chien : " << dog1->getBrain()->getIdea(1) << std::endl;

    Cat* cat1 = new Cat();
    cat1->getBrain()->setIdea(0, "Dormir");
    std::cout << "Idée 0 du chat : " << cat1->getBrain()->getIdea(0) << std::endl;

    delete dog1;
    delete cat1;

    std::cout << "\n=== TEST AVEC TABLEAU D'ANIMAUX (DOGS & CATS) ===" << std::endl;
    const int size = 6;
    Animal* animals[size];
    
    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();
    
    for (int i = 0; i < size; i++) {
        std::cout << "Animal " << i << " de type " << animals[i]->getType() << " fait : ";
        animals[i]->makeSound();
    }
    
    for (int i = 0; i < size; i++)
        delete animals[i];
    
    return 0;
}
