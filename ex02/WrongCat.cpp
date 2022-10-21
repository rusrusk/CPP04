#include "WrongCat.hpp"

WrongCat::WrongCat() : _wrong_type("WRONGCAT") {

	std::cout << COLOR_YELLOW << this->_wrong_type << " CONSTRUCTOR WAS CALLED" << COLOR_DEFAULT << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other._wrong_type) {

	*this = other;
	std::cout << this->_wrong_type << " COPY CONSTRUCTOR WAS CALLED!!!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	std::cout << "COPY ASSIGNMENT OPERATOR WAS CALLED!!!" << std::endl;
	if (this != &other) {
		this->_wrong_type = other._wrong_type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << COLOR_YELLOW << this->_wrong_type << " WAS DESTROYED!!!" << COLOR_DEFAULT << std::endl;
}

std::string WrongCat::getWrongType(void) const {
	return this->_wrong_type;
}	

void WrongCat::makeWrongSound() const {
	std::cout << COLOR_YELLOW << "HEE-HAAAAAW" << COLOR_DEFAULT << std::endl;
}