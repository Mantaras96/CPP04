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

Dog::Dog(Dog const &another): Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return *this;
}

Animal &Dog::operator=(Animal const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
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