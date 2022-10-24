#include "Dog.hpp"

Dog::Dog() : _type("Dog"), _brain(0) {
    this->_brain = new Brain();
    std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other._type) {
    this->_type = other._type;
    this->_brain = new Brain();
    *(this->_brain) = (*other._brain);
    std::cout << "[" << this->_type << "]"
              << " Copy constructor was called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "[" << other._type << "]"
              << " Copy assignment operator was called" << std::endl;
    if (this != &other) {
        this->_type = other._type;

        *this->_brain = *(other._brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "[" << this->_type << "]"
              << " was destroyed" << std::endl;
    delete this->_brain;
}

std::string Dog::getType(void) const { return this->_type; }

void Dog::makeSound() const { std::cout << "Baaaaaaark" << std::endl; }

void Dog::setIdea(std::string param_idea, int i) {
    this->_brain->setIdea(param_idea, i);
}

std::string Dog::getIdea(int i) const { return this->_brain->getIdea(i); }

Brain *Dog::getBrain() const { return (this->_brain); }