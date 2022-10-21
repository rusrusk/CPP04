#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
    // std::string _type;
    Brain* brain;

   public:
    // Cat(std::string param_type);
    void makeSound() const;
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();

    //getters
    std::string getType(void) const;

    //Brain setter and getter
    void setIdea(std::string param_idea, int i);
    Brain* getIdea(void) const;
};

#endif