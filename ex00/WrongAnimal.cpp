#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _wrong_type("WRONGANIMAL!!!") {
    std::cout << COLOR_RED << this->_wrong_type << " CONSTRUCTOR WAS CALLED!!!"
              << COLOR_DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(std::string param_wrong_type)
    : _wrong_type(param_wrong_type) {
    std::cout << this->_wrong_type << " WAS CALLED!!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    *this = other;
    std::cout << this->_wrong_type << " COPY CONSTRUCTOR WAS CALLED!!!"
              << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "COPY ASSIGNMENT OPERATOR WAS CALLED!!!" << std::endl;
    if (this != &other) {
        this->_wrong_type = other._wrong_type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal() {
    std::cout << COLOR_RED << this->_wrong_type << " WAS DESTROYED!!!"
              << COLOR_DEFAULT << std::endl;
}

void WrongAnimal::setWrongType(std::string param_wrong_type) {
    this->_wrong_type = param_wrong_type;
}

std::string WrongAnimal::getWrongType(void) const { return this->_wrong_type; }

void WrongAnimal::makeWrongSound() const {
    std::cout << COLOR_RED << "WRONG ANIMAL SOUND!!!" << COLOR_DEFAULT
              << std::endl;
}