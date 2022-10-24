#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

class Brain {
   protected:
    std::string _ideas[100];

   public:
    Brain();
    Brain(std::string param_name);
    Brain(const Brain &other);
    Brain &operator=(const Brain &other);
    ~Brain();

    // setter and getter
    void setIdea(std::string param_idea, int i);
    std::string getIdea(int i) const;
};

#endif
