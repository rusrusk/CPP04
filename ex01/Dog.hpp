#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
   private:
    Brain *_brain;


   public:
    void makeSound() const;
    // Dog(std::string param_type);
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    ~Dog();

    // getter
    std::string getType(void) const;

    // Brain getter and setter
    void setIdea(std::string param_idea, int i);
    std::string getIdea(int i) const;
    Brain *getBrain() const;
};

#endif