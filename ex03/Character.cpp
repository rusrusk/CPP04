#include "Character.hpp"

Character::Character() : nb_of_known_materials(0),  _inventory_name("Character") {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        this->_inventory_size_slots[i] = NULL;
    }
    std::cout << "[" << this->_inventory_name
              << "] Default constructor was called" << std::endl;
}

Character::Character(std::string param_name) : nb_of_known_materials(0), _inventory_name(param_name) {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        this->_inventory_size_slots[i] = NULL;
    }
    std::cout << "[" << this->_inventory_name << "] Parameterized constructor was called" << std::endl;
}

Character::Character(const Character &other) {
    *this = other;
    std::cout << "[" << this->_inventory_name << "] Copy constructor was called"
              << std::endl;
}

Character Character::operator=(const Character &other) {
    if (this != &other) {
        this->_inventory_name = other._inventory_name;
        for (int i = 0; i < this->_equipped_capacity_nb; i++) {
            if (this->_inventory_size_slots[i] != NULL) {
                this->_inventory_size_slots[i] =
                    other._inventory_size_slots[i]->clone();
            } else
                this->_inventory_size_slots[i] = NULL;
        }
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory_size_slots[i] != NULL) { 
            delete this->_inventory_size_slots[i];
            // _inventory_size_slots[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (this->tmp_trash[i] != NULL) { 
            delete this->tmp_trash[i];
            // _inventory_size_slots[i] = NULL;
        }
    }

    // delete[] this->_inventory_size_slots;
    std::cout << "[" << this->_inventory_name << "] Destructor was called"
              << std::endl;
}

std::string const &Character::getName() const { return this->_inventory_name; }

void Character::use(int idx, ICharacter &target) {
    if (this->_inventory_size_slots[idx] != NULL) {
        std::cout << this->_inventory_name << " ";
        this->_inventory_size_slots[idx]->use(target);
    }
}

void Character::equip(AMateria *m) {
    if (!m) return;

    for (unsigned int i = 0; i < sizeof(this->_inventory_size_slots)/sizeof(this->_inventory_size_slots[0]); i++) {
		if (this->_inventory_size_slots[i] == NULL) {
			this->_inventory_size_slots[i] = m;
			nb_of_known_materials++;
			std::cout << "[" << this->_inventory_name << "] equipped new [" << m->getType() << "] Materia at a slot [";
			std::cout << nb_of_known_materials << "]" << std::endl;
            m = NULL;
			break;
		}
    }
    if (m != NULL) {
        std::cout << "[" << this->_inventory_name << "] attempted to equip [" << m->getType();
        std::cout << "], but the slot is fully equipped" << std::endl;
    }
}



void Character::unequip(int idx) {
    if (idx >= this->_equipped_capacity_nb) {
        std::cout
            << this->getName()
            << " cannot unequip the Materia which is not in a range of slots"
            << std::endl;
        return;
    }

    if (this->_inventory_size_slots[idx] != NULL) {
        if (this->tmp_trash[idx])
            delete this->tmp_trash[idx];
        this->tmp_trash[idx] = this->_inventory_size_slots[idx];
        this->_inventory_size_slots[idx] = NULL;
        std::cout << this->getName()
                  << " unequipped the Materia " << this->_inventory_name << " at index : " << idx << std::endl;
    } else
        std::cout << this->getName()
                  << " is not able to equip the Materia that it doesn't have"
                  << std::endl;
}