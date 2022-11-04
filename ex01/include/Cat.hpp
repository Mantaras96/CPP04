# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{
    public:
        Cat();
        ~Cat(void);
        Cat(Cat const &another);
        Cat &operator=(const Cat &other);
        virtual void makeSound(void) const;
        Animal getType(void) const;
};

# endif