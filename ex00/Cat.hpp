#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"

class Cat : public Animal {
   private:
    std::string _type;

   public:
    // Cat(std::string param_type);
    void makeSound() const;
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();

    //getters
    std::string getType(void) const;
};

#endif