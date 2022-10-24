#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
   private:
    std::string _wrong_type;

   public:
    WrongCat();
    WrongCat(const WrongCat &other);
    WrongCat &operator=(const WrongCat &other);
    ~WrongCat();

    // getter and setter
    void setWrongType(std::string param_wrong_type);
    std::string getWrongType(void) const;

    void makeWrongSound() const;
};

#endif