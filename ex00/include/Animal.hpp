# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
public:
    Animal();
    Animal(std::string type);
    ~Animal(void);
    Animal(Animal const &another);
    Animal &operator=(const Animal &other);
    virtual void makeSound(void);
    std::string getType(void) const;

protected:
    std::string type;
};

# endif