#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"

class Cat : public Animal {
   private:
    

   public:
    // Cat(std::string param_type);
     void makeSound(void) const;
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();

    //getters
    std::string getType(void) const;
};

#endif