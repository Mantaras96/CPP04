# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
    public:
        Dog();
        ~Dog(void);
        Dog(Dog const &another);
        Dog &operator=(const Dog &other);
        virtual void makeSound(void) const;
        Animal getType(void) const;
        Brain *getBrain() const;

    private:
        Brain *brain;
};

# endif