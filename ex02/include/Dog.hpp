# ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public AAnimal
{
    public:
        Dog();
        ~Dog(void);
        Dog(Dog const &another);
        Dog &operator=(const Dog &other);
        virtual void makeSound(void) const;
        AAnimal getType(void) const;
        virtual Brain	*getBrain( void ) const;
        
    private:
        Brain *brain;
};

# endif