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

Dog::Dog(Dog const &another)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = another;
}

Dog &Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

AAnimal &Dog::operator=(AAnimal const & rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
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