#include "Brain.hpp"

Brain::Brain() {

	for (int i = 0; i < 100; i++) {

		this->_ideas[i] = " idea is not made up yet";
	}
	std::cout << "[Brain] Default constructor was called" << std::endl;
}


Brain::Brain(const Brain &other) {

	*this = other;
	std::cout << "[Brain] Copy constructor was called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {

	if (this != &other) {

		for (int i = 0; i < 100; i++) {

			this->_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "[Brain] Copy assignment operator was called" << std::endl;
	return *this;
}

Brain::~Brain() {
	// delete[] this->_ideas;
	std::cout << "[Brain] was destroyed" << std::endl;
}


void Brain::setIdea(std::string param_idea, int i) {

	this->_ideas[i] = param_idea;
}

std::string Brain::getIdea(int i) const {

	return this->_ideas[i];
}

