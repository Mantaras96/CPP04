#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include <iostream>
#include <string>


int main()
{
	int size = 5;
	Animal	*arrayAnimals[2 * size];

	for (int i = 0; i < size; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[size + i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < 2 * size; i++)
		delete arrayAnimals[i];
}