#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
   private:
    Brain *_brain;

   public:
    void makeSound() const;
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();

    // getters
    std::string getType(void) const;

    // Brain setter and getter
    void setIdea(std::string param_idea, int i);
    std::string getIdea(int i) const;
    Brain *getBrain() const;
};

#endif