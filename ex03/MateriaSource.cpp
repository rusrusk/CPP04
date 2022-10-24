#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
    : nb_of_known_materials(-1), nb_learn_materia_calls(-1) {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        this->_inventory_size_slots[i] = NULL;
    }
    std::cout << "[MateriaSource] Default constructor was called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < _equipped_capacity_nb; i++) {
        if (other._inventory_size_slots[i]) {
            this->_inventory_size_slots[i] =
                other._inventory_size_slots[i]->clone();
        } else
            this->_inventory_size_slots[i] = NULL;
    }
    std::cout << "[MateriaSource] Copy constructor was called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        for (int i = 0; i < this->_equipped_capacity_nb; i++) {
            if (other._inventory_size_slots[i] != NULL)
                this->_inventory_size_slots[i] =
                    other._inventory_size_slots[i]->clone();
            else
                this->_inventory_size_slots[i] = NULL;
        }
    }
    std::cout << "[MateriaSource] Copy Assignment operator was called"
              << std::endl;
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < _equipped_capacity_nb; i++) {
        if (this->_inventory_size_slots[i] != NULL) {
            delete this->_inventory_size_slots[i];
        }
    }
    std::cout << "[MateriaSource] destructor was called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *newMateria) {
    this->nb_learn_materia_calls++;
    if (nb_of_known_materials >= 3 && newMateria != NULL) {
        std::cout << COLOR_RED << "[MateriaSource] ATTEMPTS TO LEARN "
                  << newMateria->getType() << " MATERIA AT A SLOT : (";
        std::cout << nb_learn_materia_calls << "). ALL THE SLOTS ARE RESERVED:("
                  << COLOR_DEFAULT << std::endl;
        delete newMateria;
        return;
    }
    for (unsigned int i = 0; i < sizeof(this->_inventory_size_slots) /
                                     sizeof(this->_inventory_size_slots[0]);
         i++) {
        if (this->_inventory_size_slots[i] == NULL) {
            this->_inventory_size_slots[i] = newMateria;
            nb_of_known_materials++;
            std::cout << COLOR_GREEN << std::string(80, '*') << COLOR_DEFAULT
                      << std::endl;
            std::cout << COLOR_GREEN << "~~~~~ [MateriaSource] learned new ["
                      << newMateria->getType() << "] Materia at a slot : (";
            std::cout << nb_of_known_materials << ") ~~~~~          "
                      << "*" << COLOR_DEFAULT << std::endl;
            std::cout << COLOR_GREEN << std::string(80, '*') << COLOR_DEFAULT
                      << std::endl;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    int i = 0;
    if (type != "ice" && type != "cure") {
        std::cout << COLOR_RED
                  << "[MateriaSource] IS NOT ABLE TO CREATE THE MATERIA THAT "
                     "DOESN'T EXIST!"
                  << COLOR_DEFAULT << std::endl;
        return NULL;
    }
    while (i < _equipped_capacity_nb && this->_inventory_size_slots[i] &&
           this->_inventory_size_slots[i]->getType() != type)
        i++;
    if (i < this->_equipped_capacity_nb &&
        this->_inventory_size_slots[i] != NULL) {
        return this->_inventory_size_slots[i]->clone();
    } else
        return 0;
}