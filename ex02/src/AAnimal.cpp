#include "../include/AAnimal.hpp"

AAnimal::~AAnimal(void)
{
    std::cout << "Animal " << this->type << " is dead" << std::endl;
}

const std::string   &AAnimal::getType( void ) const
{
    return this->type;
}
