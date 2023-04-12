#include "../include/Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "Dog " << this->type << " is dead" << std::endl;
}

Dog::Dog(Dog const &another): AAnimal()
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

Brain	*Dog::getBrain( void ) const
{
	return (this->brain);
}
