#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "Animal.hpp"

class Dog : public Animal {
   private:
    std::string _type;

   public:
    void makeSound() const;
    // Dog(std::string param_type);
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();

    //getter
    std::string getType(void) const;
};

#endif