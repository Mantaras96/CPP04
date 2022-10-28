# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
    public:
        Dog();
        ~Dog(void);
        Dog(Dog const &another);
        Dog &operator=(const Dog &other);
        void makeSound(void);
        Animal getType(void) const;
};

# endif