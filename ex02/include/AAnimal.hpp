# ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
public:

    virtual ~AAnimal(void);

    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    AAnimal();
    AAnimal(std::string type);
    AAnimal(AAnimal const &another);
    virtual AAnimal &operator=(const AAnimal &other);
    std::string type;
};

# endif