#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>
#include <string>


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
meta->makeSound();
i->makeSound();
j->makeSound();

const Animal* coco = new Animal("Cocodrile");
std::cout << coco->getType() << " " << std::endl;
coco->makeSound();


return 0;
}