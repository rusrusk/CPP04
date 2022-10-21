#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	private :

	protected :
				
	public :
				Ice();
				Ice(const Ice &other);
				Ice &operator=(const Ice &other);
				~Ice();

				virtual AMateria *clone() const;
				virtual void use (ICharacter &target);
				std::string const &getType() const;

};



#endif