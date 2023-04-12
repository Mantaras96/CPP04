#include "../include/AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string name)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = name;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal " << this->type << " is dead" << std::endl;
}

AAnimal::AAnimal(AAnimal const &another)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = another;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void AAnimal::makeSound(void) const
{
    std::cout << "Animal " << this->type << " says something" << std::endl;
}

std::string AAnimal::getType(void) const
{
    return this->type;
}
