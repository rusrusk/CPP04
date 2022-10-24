#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
   private:
    static const int _equipped_capacity_nb = 4;
    AMateria *_inventory_size_slots[_equipped_capacity_nb];
    AMateria *tmp_trash[_equipped_capacity_nb];
    int nb_of_known_materials;

   protected:
    std::string _inventory_name;

   public:
    Character();
    Character(std::string param_name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    ~Character();

    virtual void equip(AMateria *m);
    virtual void unequip(int idx);
    virtual std::string const &getName() const;
    virtual void use(int idx, ICharacter &target);
};

#endif