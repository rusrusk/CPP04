#include "Character.hpp"

Character::Character()
    : nb_of_known_materials(-1), _inventory_name("Character") {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        this->_inventory_size_slots[i] = NULL;
        this->tmp_trash[i] = NULL;
    }
    std::cout << "[Character] Default constructor was called" << std::endl;
}

Character::Character(std::string param_name)
    : nb_of_known_materials(-1), _inventory_name(param_name) {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        this->_inventory_size_slots[i] = NULL;
        this->tmp_trash[i] = NULL;
    }
    std::cout << "[Character] Parameterized Constructor was called"
              << std::endl;
}

Character::Character(const Character &other) {
    for (int i = 0; i < this->_equipped_capacity_nb; i++) {
        if (this->_inventory_size_slots[i] != NULL) {
            this->_inventory_size_slots[i] =
                other._inventory_size_slots[i]->clone();
        }
    }
    std::cout << "[Character] Copy constructor was called" << std::endl;
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        this->_inventory_name = other._inventory_name;
        for (int i = 0; i < this->_equipped_capacity_nb; i++) {
            if (this->_inventory_size_slots[i])
                delete this->_inventory_size_slots[i];
            if (other._inventory_size_slots[i] != NULL) {
                this->_inventory_size_slots[i] =
                    other._inventory_size_slots[i]->clone();
            } else
                this->_inventory_size_slots[i] = NULL;
        }
    }
    std::cout << "[Character] Copy Assignment operator was called" << std::endl;
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory_size_slots[i] != NULL) {
            delete this->_inventory_size_slots[i];
        }
    }
    for (int i = 0; i < 4; i++) {
        if (this->tmp_trash[i] != NULL) {
            delete this->tmp_trash[i];
        }
    }
    std::cout << "[Character] Destructor was called" << std::endl;
}

std::string const &Character::getName() const { return this->_inventory_name; }

void Character::use(int idx, ICharacter &target) {
    if (idx < 4 && this->_inventory_size_slots[idx] != NULL) {
        std::cout << COLOR_CYAN << this->_inventory_name << COLOR_DEFAULT
                  << " ";
        this->_inventory_size_slots[idx]->use(target);
    } else
        std::cout << COLOR_RED << "[" << this->_inventory_name
                  << "] CHARACTER IS NOT ABLE TO USE INDEX : (" << idx << ")"
                  << COLOR_DEFAULT << std::endl;
}

void Character::equip(AMateria *m) {
    if (!m) return;

    for (unsigned int i = 0; i < sizeof(this->_inventory_size_slots) /
                                     sizeof(this->_inventory_size_slots[0]);
         i++) {
        if (this->_inventory_size_slots[i] == NULL) {
            this->_inventory_size_slots[i] = m;
            nb_of_known_materials++;
            std::cout << COLOR_MAGENTA << std::string(80, '-') << std::endl;
            std::cout << "^-^-^-^-^-^ [" << this->_inventory_name
                      << "] equipped new [" << m->getType()
                      << "] Materia at a slot : (";
            std::cout << nb_of_known_materials << ") ^-^-^-^-^-^     |"
                      << std::endl;
            std::cout << std::string(80, '-') << COLOR_DEFAULT << std::endl;
            m = NULL;
            return;
        }
    }
    if (m != NULL) {
        std::cout << COLOR_RED << "[" << this->_inventory_name
                  << "] ATTEMPTED TO EQUIP [" << m->getType();
        std::cout << "], BUT THE SLOT IS FULLY EQUIPPED" << COLOR_DEFAULT
                  << std::endl;
        delete m;
    }

}

void Character::unequip(int idx) {
    if (idx >= this->_equipped_capacity_nb) {
        std::cout << this->getName() << COLOR_RED
                  << " CANNOT UNEQUIP MATERIA WHICH IS NOT IN A RANGE!"
                  << COLOR_DEFAULT << std::endl;
        return;
    }

    if (this->_inventory_size_slots[idx] != NULL) {
        if (this->tmp_trash[idx]) delete this->tmp_trash[idx];
        this->tmp_trash[idx] = this->_inventory_size_slots[idx];
        std::cout << COLOR_GREY << std::string(80, '-') << std::endl;
        std::cout << "^-^-^-^-^-^ [" << this->getName()
                  << "] unequipped the Materia ["
                  << this->_inventory_size_slots[idx]->getType()
                  << "] at index : (" << idx << ") ^-^-^-^-^-^    |";
        std::cout << COLOR_DEFAULT << std::endl;
        std::cout << COLOR_GREY << std::string(80, '-') << COLOR_DEFAULT
                  << std::endl;
        this->_inventory_size_slots[idx] = NULL;
    } else {
        std::cout << this->getName() << COLOR_RED
                  << " IS NOT ABLE TO UNEQUIP THE MATERIA THAT IS DOESN'T HAVE!"
                  << COLOR_DEFAULT << std::endl;
    }
}