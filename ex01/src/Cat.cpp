#include "../include/Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat " << this->type << " is dead" << std::endl;
}

Cat::Cat(Cat const &another): Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = another;
}

Cat &Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return *this;
}

Animal &Cat::operator=(Animal const & rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = other.getType();
    *(this->brain) = *(other.getBrain());
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "Cat " << this->type << " says meow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return (this->brain);
}

