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

        virtual Dog		&operator=( Dog const & rhs );
	    virtual AAnimal	&operator=( const AAnimal &other );
        
        virtual void makeSound(void) const;
	    virtual Brain	*getBrain( void ) const;
        
    private:
        Brain *brain;
};

# endif