#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

// Dog::Dog(std::string param_type) {

// 	std::cout << param_type << " was called" << std::endl;
// }

Dog::Dog(const Dog &other) : Animal(other._type) {

	this->_type = other._type;
	std::cout << "Copy constructor was called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {

	std::cout << "Copy assignment operator was called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		std::cout << "Copy assignment operator was called" << std::endl;

	}
	return *this;
}

Dog::~Dog() {
	std::cout << "[" << this->_type << "] was destroyed" << std::endl;
}

std::string Dog::getType(void) const {
	return this->_type;
}

void Dog::makeSound() const {
	std::cout << "[" << this->_type << "] Baaaaaaark" << std::endl;
}