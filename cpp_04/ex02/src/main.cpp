#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongDog.hpp"
#include "../include/WrongCat.hpp"
#include "../include/Brain.hpp"

int main()
{
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

}
