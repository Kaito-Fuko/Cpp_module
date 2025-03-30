#include "../include/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++) 
        ideas[i] = "Empty Idea";
	std::cout << "Brain Default created" << std::endl;
}

Brain::Brain(const Brain& other): ideas(other.ideas)
{
	for (int i = 0; i < 100; i++) 
        ideas[i] = "Empty Idea";
	std::cout << "Brain copy created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return *this;
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
	else
		std::cerr << "error: wrong index in setIdeas()" << std::endl;	
}

std::string Brain::getIdea(int i)
{
	return ideas[i];
}
