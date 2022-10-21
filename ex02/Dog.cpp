#include "Dog.hpp"

Dog::Dog() : _type("Dog") {

	this->brain = new Brain();
	std::cout << "[" << this->_type << "] constructor was called" << std::endl;
}

// Dog::Dog(std::string param_type) {

// 	std::cout << param_type << " was called" << std::endl;
// }

Dog::Dog(const Dog &other) : Animal(other._type) {

	
	*this = other;
	std::cout << "[" << this->_type << "]" << " Copy constructor was called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {

	std::cout << "[" << other._type << "]" << " Copy assignment operator was called" << std::endl;
	if (this != &other) {
		this->_type = other._type;
		// delete this->brain;
		this->brain = new Brain(*other.brain);
		// *this->brain = *(other.brain);

	}
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "[" << this->_type << "]" << " was destroyed" << std::endl;
}

std::string Dog::getType(void) const {
	return this->_type;
}

void Dog::makeSound() const {
	std::cout << "Baaaaaaark" << std::endl;
}

void Dog::setIdea(std::string param_idea, int i) {
	this->brain->setIdea(param_idea, i);
}

Brain* Dog::getIdea(void) const {
	return this->brain;
}