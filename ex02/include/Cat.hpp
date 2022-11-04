# ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Cat : public AAnimal
{
    public:
        Cat();
        ~Cat(void);
        Cat(Cat const &another);
        Cat &operator=(const Cat &other);
        virtual void makeSound(void) const;
        AAnimal getType(void) const;
        virtual Brain	*getBrain( void ) const;

    private:
        Brain *brain;
};


# endif