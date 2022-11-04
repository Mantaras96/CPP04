#include "../include/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog " << this->type << " is dead" << std::endl;
}

Dog::Dog(Dog const &another)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = another;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "Dog " << this->type << " says woof" << std::endl;
}