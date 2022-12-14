#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "[" << this->_type << "] Default Constructor was called"
              << std::endl;
}

Cure::Cure(const Cure &other) : AMateria() {
    *this = other;
    std::cout << "[" << this->_type << "] Copy constructor was called"
              << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
    if (this != &other) {
        this->_type = other.getType();
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "[" << this->_type << "] destructor was called" << std::endl;
}

AMateria *Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter &target) {
    std::cout << COLOR_CYAN << "* heals " << target.getName() << "'s wounds"
              << COLOR_DEFAULT << std::endl;
}

std::string const &Cure::getType() const { return this->_type; }