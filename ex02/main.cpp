#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"



int main () {

	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
	// Animal *animal = new Animal();
	// std::cout << "This is [" << animal->getType() << "]" << std::endl;
	// animal->makeSound();
	// delete animal;
	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
	// Animal *cat = new Cat();
	// std::cout << "This is [" << cat->getType() << "]" << std::endl;
	// cat->makeSound();
	// delete cat;
	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

	// Animal *dog = new Dog();
	// std::cout << "This is [" << dog->getType() << "]" << std::endl;
	// dog->makeSound();
	// delete dog;
	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

	// WrongAnimal *wrong_animal = new WrongAnimal();
	// std::cout << "This is [" << wrong_animal->getWrongType() << "]" << std::endl;
	// wrong_animal->makeWrongSound();
	// delete wrong_animal;
	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

	// WrongCat *wrong_cat = new WrongCat();
	// std::cout << "This is [" << wrong_cat->getWrongType() << "]" << std::endl;
	// wrong_cat->makeWrongSound();
	// delete wrong_cat;
	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

	// Dog dog1;
	// Dog dog2 = dog1;
	std::string temp("test");

	std::string *a = &temp;
	std::string *b = new std::string(*a);

	a->append("te");
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
}


// int main {

// 		//TEST PROPER ANIMAL
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// 	// Animal animal("Animal");
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// 	// Cat cat;
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// 	// Dog dog;
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// animal.makeSound();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// cat.makeSound();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// dog.makeSound();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// }


// int main {

// 	//TEST WRONGANIMAL!!!
// 	// const WrongAnimal* wrong = new WrongAnimal();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;


// 	// const WrongAnimal* wrong_cat = new WrongCat();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;


// 	// std::cout << wrong->getWrongType() << " " << std::endl;
// 	// std::cout << wrong_cat->getWrongType() << " " << std::endl;

// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// 	// wrong->makeWrongSound();
// 	// wrong_cat->makeWrongSound();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// delete wrong_cat;
// 	// delete wrong;
// }


// int main {

// 		// //SUBJECT MAIN
// 	// const Animal* meta = new Animal();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// const Animal* j = new Dog();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// const Animal* i = new Cat();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// std::cout << j->getType() << " " << std::endl;
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
	
// 	// std::cout << i->getType() << " " << std::endl;
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// i->makeSound(); 
// 	// j->makeSound();
// 	// meta->makeSound();
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;

// 	// delete meta;
// 	// delete j;
// 	// delete i;
// 	// std::cout << COLOR_BLUE << std::string(50, '=') << COLOR_DEFAULT << std::endl;
// }