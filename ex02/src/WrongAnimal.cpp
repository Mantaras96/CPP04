 #include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal " << this->type << " is dead" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &another)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = another;
}   

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal " << this->type << " says something" << std::endl;
}
