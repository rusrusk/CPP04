#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"
#define COLOR_BOLDYELLOW "\033[1m\033[33m"
#define COLOR_CYAN "\033[36m"
#define COLOR_GREY "\033[30m"

class ICharacter;

class AMateria {
   protected:
    std::string _type;

   public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    AMateria &operator=(const AMateria &other);
    virtual ~AMateria();
    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target) = 0;
};

#endif