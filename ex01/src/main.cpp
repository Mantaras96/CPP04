#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>
#include <string>


int main()
{
const Animal* j = new Dog();
// const Animal* i = new Cat();
delete j;//should not create a leak
// delete i;
return 0;
}