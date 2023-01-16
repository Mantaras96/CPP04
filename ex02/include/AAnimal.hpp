# ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
public:
    virtual ~AAnimal(void);
    AAnimal(AAnimal const &another);
    virtual AAnimal &operator=(const AAnimal &other);
    virtual void makeSound(void) const;
    const std::string	&getType( void ) const ;
    virtual Brain	*getBrain( void ) const;

protected:
    std::string type;
};

# endif