#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(0) {
    this->_brain = new Brain();
    std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other._type) {
    this->_type = other._type;
    this->_brain = new Brain();
    *(this->_brain) = *(other._brain);

    std::cout << "[" << this->_type << "]"
              << " Copy constructor was called" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "[" << other._type << "] Copy assignment operator was called"
              << std::endl;
    if (this != &other) {
        this->_type = other._type;
        *(this->_brain) = *(other._brain);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "[" << this->_type << "] was destroyed" << std::endl;
    delete this->_brain;
}

std::string Cat::getType(void) const { return this->_type; }

void Cat::makeSound() const {
    std::cout << "Meeeeeeeoooooooooooowwwwwwwwwww" << std::endl;
}

void Cat::setIdea(std::string param_idea, int i) {
    this->_brain->setIdea(param_idea, i);
}

std::string Cat::getIdea(int i) const { return this->_brain->getIdea(i); }

Brain *Cat::getBrain() const { return (this->_brain); }