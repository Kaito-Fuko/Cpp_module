#include "../include/Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++) 
        ideas[i] = "Empty Idea";
	std::cout << "\033[35m" << "Brain Default created" << "\033[0m" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++) 
        ideas[i] = other.ideas[i];
	std::cout << "\033[35m" << "Brain copy created" << "\033[0m" << std::endl;
}

Brain::~Brain()
{
	std::cout << "\033[35m" << "Brain destroyed" << "\033[0m" << std::endl;
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
		std::cerr << "\033[35m" << "error: wrong index in setIdeas()" << "\033[0m" << std::endl;	
}

std::string Brain::getIdea(int i) const
{
	return ideas[i];
}
