#include "../include/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string name)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = name;
}

Animal::~Animal(void)
{
    std::cout << "Animal " << this->type << " is dead" << std::endl;
}

Animal::Animal(Animal const &another)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = another;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal " << this->type << " says something" << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}
