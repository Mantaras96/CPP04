#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat " << this->type << " is dead" << std::endl;
}

WrongCat::WrongCat(WrongCat const &another): WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = another;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = other.type;
    return *this;
}
