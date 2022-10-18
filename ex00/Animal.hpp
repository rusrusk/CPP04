#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

	private :
			std::string _name;
	public :
			Animal(std::string param_name);
			Animal();
			Animal(const Animal &other);
			Animal operator=(const Animal &other);
			~Animal();


};










#endif