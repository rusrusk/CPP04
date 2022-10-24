#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

#define COLOR_DEFAULT "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_GREEN "\033[32m"
#define COLOR_YELLOW "\033[33m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_WHITE "\033[37m"

class WrongAnimal {


	protected :
			std::string _wrong_type;

	public :
			WrongAnimal(std::string param_wrong_type);
			WrongAnimal();
			WrongAnimal(const WrongAnimal &other);
			WrongAnimal &operator=(const WrongAnimal &other);
			virtual ~WrongAnimal();

			//getter and setter
			void setWrongType(std::string param_wrong_type);
			virtual std::string getWrongType(void) const;
			
			void makeWrongSound() const;
};



#endif