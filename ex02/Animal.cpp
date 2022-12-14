#include "Animal.hpp"

Animal::Animal(std::string param_name) : _type(param_name) {
    std::cout << "[Animal] was called" << std::endl;
}

Animal::Animal() : _type("Animal") {
    std::cout << "[Animal] Default constructor was called" << std::endl;
}

Animal::Animal(const Animal &other) {
    *this = other;
    std::cout << "[Animal]"
              << " Copy constructor was called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "[" << other._type << "] Copy assignment operator was called"
              << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal() { std::cout << "[Animal] was destroyed" << std::endl; }

void Animal::setType(std::string param_type) { this->_type = param_type; }

std::string Animal::getType(void) const { return this->_type; }
