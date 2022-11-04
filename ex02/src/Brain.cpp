#include "../include/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain is dead" << std::endl;
}

Brain::Brain(Brain const &another)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = another;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}
