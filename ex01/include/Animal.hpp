# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
    Animal();
    Animal(std::string type);
    virtual ~Animal(void);
    Animal(Animal const &another);
    virtual Animal &operator=(const Animal &other);
    virtual void makeSound(void) const;
    std::string getType(void) const;

protected:
    std::string type;
};

# endif