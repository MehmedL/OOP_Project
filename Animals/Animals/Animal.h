#pragma once
class Animal
{
	char name[20];
	int mouvementSpeed;
	int foodSupplyForOneMeal;
	int foodArea;
	int age;

public:
	Animal(char* name, int mouvementSpeed, int foodSupplyForOneMeal, int foodArea, int age);
	Animal();
	~Animal();
	void printInfo();
	void feading();
	
};

