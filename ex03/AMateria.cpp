#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria") {
    std::cout << "[AMateria] Default Constructor was called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "[AMateria] Parameterized Constructor was called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {
    *this = other;
    std::cout << "[AMateria] Copy Constructor was called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
    if (this != &other) {
        this->_type = other.getType();
    }
    std::cout << "[AMateria] Copy Assignment operator was called" << std::endl;
    return *this;
}

AMateria::~AMateria() {
    std::cout << "[AMateria] Destructor was called" << std::endl;
}

std::string const &AMateria::getType() const { return this->_type; }
