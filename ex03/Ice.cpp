#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {

	std::cout << "[" << this->_type << "] Default Constructor was called" << std::endl;
}


Ice::Ice(const Ice &other) : AMateria() {

	*this = other;
	std::cout << "["  << this->_type << "] Copy constructor was called" << std::endl;
}

Ice &Ice::operator=(const Ice &other) {

	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

Ice::~Ice() {

	std::cout << "["  << this->_type << "] destructor was called" << std::endl;
}

AMateria *Ice::clone() const {

	return new Ice();
}

void Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

std::string const &Ice::getType() const {

	return this->_type;
}