# ifndef BRAIN_CPP
# define BRAIN_CPP

# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        ~Brain(void);
        Brain(Brain const &another);
        Brain &operator=(const Brain &other);
        
        std::string ideas[100];

};

# endif