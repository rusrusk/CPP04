#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource {
   private:
    static const int _equipped_capacity_nb = 4;
    AMateria *_inventory_size_slots[_equipped_capacity_nb];
    int nb_of_known_materials;
    int nb_learn_materia_calls;

   protected:
   public:
    MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);
    ~MateriaSource();
    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
};

#endif