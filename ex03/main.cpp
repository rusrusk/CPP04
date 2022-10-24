#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main() {
    std::cout << COLOR_BLUE << "\n##### SUBJECT TEST #####\n"
              << COLOR_DEFAULT << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    ICharacter* bob = new Character("bob");
    tmp = src->createMateria("cure");
    bob->equip(tmp);
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    delete bob;
    delete me;
    delete src;
    std::cout << COLOR_BLUE << "\n##### END OF SUBJECT TEST #####\n"
              << COLOR_DEFAULT << std::endl;
}


    // std::cout << COLOR_BLUE << "\n##### CUSTOM TEST 1 #####\n" <<
    // COLOR_DEFAULT << std::endl; std::cout << COLOR_BLUE << std::string(80,
    // '=') << COLOR_DEFAULT << std::endl; IMateriaSource *materia_source = new
    // MateriaSource();

    // std::cout << COLOR_BLUE << "\n##### LEARN 4 + 1 Materia #####\n" <<
    // COLOR_DEFAULT << std::endl; for (int i = 0; i <= 4; i++) {

    // 	materia_source->learnMateria(new Ice());
    // }
    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl;

    // std::cout << COLOR_BLUE << "\n##### New Character #####\n" <<
    // COLOR_DEFAULT << std::endl; ICharacter *ruslan = new Character("ruslan");
    // AMateria *tmp;
    // std::cout << COLOR_BLUE << "\n##### Create Materias and equip them 4 + 1
    // #####\n" << COLOR_DEFAULT << std::endl; for (int i = 0; i <= 5; i++) {

    // 	tmp = materia_source->createMateria("ice");
    // 	ruslan->equip(tmp);

    // }
    // delete tmp;
    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl;

    // std::cout << COLOR_BLUE << "\n##### USE 4 + 1 Materias #####\n" <<
    // COLOR_DEFAULT << std::endl; int tracking = -1; ICharacter *Olaf = new
    // Character("Olaf"); for (int i = 0; i <= 4; i++) { 	tracking++;
    // 	ruslan->use(tracking, *Olaf);
    // }

    // delete Olaf;
    // delete ruslan;
    // delete materia_source;

    // std::cout << COLOR_BLUE << "\n##### CUSTOM TEST 2 #####\n" <<
    // COLOR_DEFAULT << std::endl;

    // IMateriaSource *i_src = new MateriaSource();
    // MateriaSource materia_src;
    // for (int i = 0; i < 4; i++) {
    // 	i_src->learnMateria(new Ice());
    // }
    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl; for (int i = 0; i < 2; i++) { 	materia_src.learnMateria(new
    // Ice);
    // }
    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl; for (int i = 0; i < 2; i++) { 	materia_src.learnMateria(new
    // Cure);
    // }

    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl; i_src->learnMateria(new Ice()); materia_src.learnMateria(new
    // Ice()); std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT
    // << std::endl;

    // std::cout << COLOR_BLUE << "\n##### Copy Constructor invoke #####\n" <<
    // COLOR_DEFAULT << std::endl; MateriaSource materia_src2(materia_src);
    // MateriaSource materia_src3;
    // materia_src3 = materia_src2;
    // std::cout << COLOR_BLUE << std::string(80, '=') << COLOR_DEFAULT <<
    // std::endl;

    // ICharacter *joker = new Character("Joker");
    // Character batman("batman");
    // Character batman_copy;
    // joker->use(0, batman);
    // batman.use(0, *joker);
    // Cure tmpCure;
    // Ice tmpIce;
    // AMateria *tmp;
    // tmp = materia_src2.createMateria("ice");
    // batman.equip(tmp);

    // tmp = materia_src2.createMateria("ice");
    // batman.equip(tmp);

    // tmp = materia_src2.createMateria("cure");
    // batman.equip(tmp);

    // tmp = materia_src2.createMateria("cure");
    // batman.equip(tmp);

    // tmp = materia_src2.createMateria("cure");
    // batman.equip(tmp);

    // // tmp = materia_src2.createMateria("cure");
    // // batman.equip(tmp);

    // // tmp = materia_src2.createMateria("cure");
    // // batman.equip(tmp);

    // batman.unequip(0);
    // batman.unequip(1);
    // batman.unequip(2);
    // batman.unequip(3);
    // batman.unequip(4);

    // // batman.equip(tmp);

    // // for (int i = 0; i < 4; i++) {
    // // 	batman.equip(&tmpIce);
    // // }
    // // batman.unequip(0);
    // // batman.unequip(1);
    // // batman.unequip(2);
    // // batman.unequip(3);
    // // batman.unequip(4);

    // delete joker;
    // delete i_src;

    // std::cout << COLOR_BLUE << "\n##### CUSTOM TEST 3 #####\n" <<
    // COLOR_DEFAULT << std::endl;

    // IMateriaSource* src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // src->learnMateria(new Cure());
    // std::cout << "creating ME" << std::endl;
    // ICharacter* me = new Character("me");
    // std::cout << "creating YOU" << std::endl;
    // ICharacter *you = new Character("you");

    // AMateria* tmp;
    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);

    // tmp = src->createMateria("ice");
    // me->equip(tmp);
    // tmp = src->createMateria("cure");
    // me->equip(tmp);
    // me->unequip(1);
    // me->unequip(2);
    // me->unequip(3);
    // me->unequip(4);
    // ICharacter* bob = new Character("bob");
    // *you = *me;
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete you;
    // delete me;
    // delete src;

    // std::cout << COLOR_BLUE << "\n##### END OF CUSTOM TEST 2 #####\n" <<
    // COLOR_DEFAULT << std::endl;

    // std::cout << COLOR_BLUE << "\n##### CUSTOM TEST 3 #####\n" <<
    // COLOR_DEFAULT << std::endl; IMateriaSource *src = new MateriaSource();
    // src->learnMateria(new Ice());
    // ICharacter* ruslan = new Character("ruslan");
    // ICharacter* Donald = new Character("Donald");
    // AMateria *tmp1;
    // tmp1 = src->createMateria("ice");
    // ruslan->equip(tmp1);
    // ruslan->use(0, *Donald);

    // tmp1 = src->createMateria("cure");
    // Donald->equip(tmp1);
    // ICharacter* bob = new Character("bob");
    // Donald->use(0, *bob);
    // Donald->use(1, *bob);

    // delete bob;
    // delete Donald;
    // delete ruslan;
    // delete src;
    // std::cout << COLOR_BLUE << "\n##### END OF CUSTOM TEST 3 #####\n" <<
    // COLOR_DEFAULT << std::endl;

