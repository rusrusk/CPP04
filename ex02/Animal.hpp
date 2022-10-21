#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

class Animal {
   private:

   protected:
    std::string _type;

   public:
    virtual void makeSound() const = 0;
    Animal(std::string param_type);
    Animal();
    Animal(const Animal &other);
    Animal &operator=(const Animal &other);
    virtual ~Animal();

    //setters and getters
    void setType(std::string param_type);
    virtual std::string getType(void) const;
};

#endif