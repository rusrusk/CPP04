#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {

	private :

	protected :

	public :
				Cure();
				// Cure(std::string param_type);
				Cure(const Cure &other);
				Cure &operator=(const Cure &other);
				~Cure();

				virtual AMateria *clone() const;
				virtual void use (ICharacter &target);
				std::string const &getType() const ;

};


#endif