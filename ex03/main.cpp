#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main () {

	// AMateria *amateria1 = new Cure();

	// amateria1->getType();
	// delete amateria1;


	// AMateria *amateria2 = new Ice();

	// amateria2->getType();
	// delete amateria2;


	// ICharacter *bob = new Character("bob");
	// ICharacter *me = new Character("me");
	// AMateria *tmp = new Ice();

	// Ice	tmpIce;
	// Cure tmpCure;
	// src->learnMateria(&tmpIce);
	// src->learnMateria(&tmpCure);
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "creating me" << std::endl;
	ICharacter* me = new Character("me");
	ICharacter *you;
	std::cout << "/creating me" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->unequip(0);
	// me->equip(tmp);
	// me->equip(tmp);

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	ICharacter* bob = new Character("bob");
	you = me;
	me->use(0, *bob);
	you->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	// src->learnMateria(new Cure());
	// ICharacter* ruslan = new Character("ruslan");
	// AMateria *tmp1;
	// tmp1 = src->createMateria("ice");
	// ruslan->equip(tmp);
	// ICharacter *Jonas = new Character("Jonas");
	// ruslan->use(0, *Jonas);
	
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	
}

