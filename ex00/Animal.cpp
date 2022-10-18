#include "Animal.hpp"

Animal::Animal(std::string param_name) : _name(param_name) {

	std::cout << this->_name << " was called" << std::endl;
}

Animal::~Animal() {
	std::cout << this->_name << " was destroyed" << std::endl;
}

