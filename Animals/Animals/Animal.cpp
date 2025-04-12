#include <iostream>
#include <string.h>
#include "Animal.h"

Animal::Animal() {
	name = new char[1];
	name[0] = '\0';
	movementSpeed = 0;
	foodSupplyPerMeal = 0; 
	foodArea = 0;
	age = 0;
}

Animal::Animal(char* pName, int speed, int foodPerMeal, int eatingArea, int years) {
	name = new char[strlen(pName)];			// ���� �� �������� +1 �� '\0', �� �� ��� �������, ������ �� � ����
	strcpy_s(name, strlen(pName), pName);

	movementSpeed = speed;
	foodSupplyPerMeal = foodPerMeal;
	foodArea = eatingArea;
	age = years;
}

Animal::Animal(const Animal &animal) {
	int lenght = strlen(animal.name) + 1; // +1 �� '\0' ��� �� ��������
	name = new char[lenght];
	strcpy_s(name, lenght, animal.name); // ���� �� �������� this->name, ������ �� � ����
	movementSpeed = animal.movementSpeed;
	foodSupplyPerMeal = animal.foodSupplyPerMeal;
	foodArea = animal.foodArea;
	age = animal.age;
}

Animal::~Animal() {
	delete[] name;
}

void Animal::Feed() {
	// ??????????????????????????????
}

void Animal::PrintInfo() {
	std::cout << "Animal name: " << name << std::endl;
	std::cout << "Animal movement speed: " << movementSpeed << std::endl;
	std::cout << "Animal food supply per meal: " << foodSupplyPerMeal << std::endl;
	std::cout << "Animal food area (in meters): " << foodArea << std::endl;
	std::cout << "Animal age: " << age << std::endl;
}
