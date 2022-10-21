#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : nb_of_known_materials(0), nb_learn_materia_calls(0) {

	for (int i = 0; i < this->_equipped_capacity_nb; i++) {

		this->_inventory_size_slots[i] = NULL;
	}
	std::cout << "[MateriaSource] Default constructor was called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {

	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {

	if (this != &other) {
		for (int i = 0; i < _equipped_capacity_nb; i++)
		{
			if (other._inventory_size_slots[i] != NULL)
				this->_inventory_size_slots[i] = other._inventory_size_slots[i]->clone();
			else
				this->_inventory_size_slots[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < _equipped_capacity_nb; i++) {

		if (this->_inventory_size_slots[i] != NULL) {
			delete this->_inventory_size_slots[i];
			this->_inventory_size_slots[i] = NULL;
		}
	}
	std::cout << "[MateriaSource] destructor was called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *newMateria) {
	this->nb_learn_materia_calls++;
	// int i = 0;
	// while (i < this->_equipped_capacity_nb && this->_inventory_size_slots[i]) {
	// 	i++;
	// }
	// if (i < this->_equipped_capacity_nb) {
	// 	this->_inventory_size_slots[i] = newMateria->clone();
	// 	this->nb_of_known_materials++;
	// 	std::cout << "Learned new " << newMateria->getType() << " Materia at a slot[";
	// 	std::cout << nb_of_known_materials << "]" << std::endl;
	// }
	// else
	// 	std::cout << "MateriaSource cannot learn more materias" << std::endl;

	// delete newMateria;
	if (nb_of_known_materials >= 4 && newMateria != NULL) {
		std::cout << "MateriaSource attempts to learn " << newMateria->getType() << " Materia at a slot [";
		std::cout << nb_learn_materia_calls << "] slot. It cannot learn more materias" << std::endl;
		return;
	}
	for (unsigned int i = 0; i < sizeof(this->_inventory_size_slots)/sizeof(this->_inventory_size_slots[0]); i++) {
		if (this->_inventory_size_slots[i] == NULL) {
			// std::cout << nb_of_known_materials << std::endl;
			this->_inventory_size_slots[i] = newMateria;
			nb_of_known_materials++;
			std::cout << "Learned new [" << newMateria->getType() << "] Materia at a slot [";
			std::cout << nb_of_known_materials << "]" << std::endl;
			return;
		}
	}
		delete newMateria;


	// for (int i = 0; i < this->_equipped_capacity_nb; i++)
	// {
	// 	if (this->_inventory_size_slots[i] == NULL) {
	// 		this->_inventory_size_slots[i] = newMateria;
	// 	}
	// 	else 
	// 		std::cout << this->_inventory_size_slots << " is full" << std::endl;
	// }
	// if (newMateria != NULL)
    //         std::cout << "MateriaSource attempted to learn " << newMateria->getType();
	// 		std::cout << " but, the inventory is full" << std::endl;
	// delete newMateria;
}

 AMateria *MateriaSource::createMateria(std::string const & type) {

	if (type != "ice" && type != "cure") {
		std::cout << "MateriaSource is not able to create the materia that doesn't exist!" << std::endl;
		return NULL;
	}
	for (unsigned int i = 0; i < sizeof(this->_inventory_size_slots)/sizeof(this->_inventory_size_slots[0]); i++)
	{
		if (this->_inventory_size_slots[i] != NULL && this->_inventory_size_slots[i]->getType() == type) {
			return this->_inventory_size_slots[i]->clone();
		}
	}
	return 0;
 }