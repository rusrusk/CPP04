#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria") {

	std::cout << "[" << this->_type << "] Default constructor was called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type) {

	std::cout << "[" << this->_type << "] Parameterized constructor was called" << std::endl;
}

AMateria::AMateria(const AMateria &other) {

	*this = other;
	std::cout << this->_type << " Copy constructor was called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {

	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

AMateria::~AMateria() {

	std::cout << "[" << this->_type << "] destructor was called" << std::endl;
}

std::string const &AMateria::getType() const {

	return this->_type;
}