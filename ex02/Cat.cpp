#include "Cat.hpp"

Cat::Cat() : _type("Cat") {
    this->brain = new Brain();
    std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other._type) {
    this->_type = other._type;
    this->brain = new Brain();
    *(this->brain) = *(other.brain);
    std::cout << "[" << this->_type << "]"
              << " Copy constructor was called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "[" << other._type << "] Copy assignment operator was called"
              << std::endl;
    if (this != &other) {
        this->_type = other._type;
        *(this->brain) = *(other.brain);
    }
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "[" << this->_type << "] was destroyed" << std::endl;
}

std::string Cat::getType(void) const { return this->_type; }

void Cat::makeSound() const {
    std::cout << "Meeeeeeeoooooooooooowwwwwwwwwww" << std::endl;
}

void Cat::setIdea(std::string param_idea, int i) {
    this->brain->setIdea(param_idea, i);
}

Brain *Cat::getIdea(void) const { return this->brain; }