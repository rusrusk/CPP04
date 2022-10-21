#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {

	std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

// Cat::Cat(std::string param_type) {

// 	std::cout << param_type << " was called" << std::endl;
// }


Cat::Cat(const Cat &other) : Animal(other._type) {

	// this->_type = other._type;
	*this = other;
}

Cat &Cat::operator=(const Cat &other) {

	if (this != &other) {
		this->_type = other._type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "[" << this->_type << "] was destroyed" << std::endl;
}

std::string Cat::getType(void) const {
	return this->_type;
}	

void Cat::makeSound() const {
	std::cout << "[" << this->_type << "] Meeeeeeeoooooooooooowwwwwwwwwww" << std::endl;
}