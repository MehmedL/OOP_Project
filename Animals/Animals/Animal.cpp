#include <iostream>
#include <string.h>
#include "Animal.h"

Animal::Animal() {
	name = new char[1];
	name[0] = '\0';
	type = 0;
	hungry = 0;
	movementSpeed = 0;
	foodSupplyPerMeal = 0; 
	foodArea = 0;
	age = 0;
}

Animal::Animal(const TPoint Placement, char* pName, int species, int fed, int speed, int foodPerMeal, int eatingArea, int years) {
	name = new char[strlen(pName)];			// може да потрябва +1 за '\0', но не съм сигурна, засега ще е така
	strcpy_s(name, strlen(pName), pName);
	
	Position = Placement;

	type = species;
	hungry = fed;
	movementSpeed = speed;
	foodSupplyPerMeal = foodPerMeal;
	foodArea = eatingArea;
	age = years;
}

Animal::Animal(const Animal &animal) {
	int lenght = strlen(animal.name) + 1; // +1 за '\0' май ще потрябва
	name = new char[lenght];
	strcpy_s(name, lenght, animal.name); // може да потрябва this->name, засега ще е така

	Position = animal.Position;

	type = animal.type;
	hungry = animal.hungry;
	movementSpeed = animal.movementSpeed;
	foodSupplyPerMeal = animal.foodSupplyPerMeal;
	foodArea = animal.foodArea;
	age = animal.age;
}

Animal::~Animal() {
	delete[] name;
}

void Animal::Eat() {
	
}

void Animal::PrintInfo() {
	std::cout << "Animal name: " << name << std::endl;


	std::cout << "Animal - Position: (" << Position.x << ", " << Position.y << ")" << std::endl;

	/*if (type == 1) std::cout << "Animal type: Predator" << std::endl;
	else std::cout << "Animal type: Herbivore" << std::endl;

	if (hungry == 1) std::cout << "Hungry: NO" << std::endl;
	else std::cout << "Hungry: YES" << std::endl << "Meals needed to be full: " << foodSupplyPerMeal << std::endl;*/

	std::cout << "Animal movement speed: " << movementSpeed << std::endl;
	std::cout << "Animal movement speed: " << movementSpeed << std::endl;
	//std::cout << "Animal food supply per meal: " << foodSupplyPerMeal << std::endl;
	std::cout << "Animal food area (in meters): " << foodArea << std::endl;
	std::cout << "Animal age: " << age << std::endl;
}
