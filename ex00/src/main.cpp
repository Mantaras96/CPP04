#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
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
std::cout << "-----------------------------------" << std::endl;
const WrongAnimal* tucan = new WrongAnimal();
tucan->getType(); 

std::cout << "-----------------------------------" << std::endl;
const WrongCat* tucan2 = new WrongCat();
tucan2->makeSound();
// No es null

delete meta;
std::cout << "-----------------------------------" << std::endl;
delete j;
std::cout << "-----------------------------------" << std::endl;
delete i;
std::cout << "-----------------------------------" << std::endl;
delete coco;
std::cout << "-----------------------------------" << std::endl;
delete tucan;
std::cout << "-----------------------------------" << std::endl;
delete tucan2;
return 0;
}