#pragma once
class Animal
{
protected:
	char *name;																				// с динамична памет
	int movementSpeed;
	int foodSupplyPerMeal;
	int foodArea;
	int age;

public:
	Animal();																				// default constructor
	Animal(char* name, int movementSpeed, int foodSupplyPerMeal, int foodArea, int age);	// constructor с параметри
	Animal(const Animal &animal);															// copy constructor
	~Animal();																				// destrucor
	virtual void Feed();																	// ще се наследява и ще е overriden, затова virtual
	virtual void PrintInfo();																// ще се наследява и ще е overriden, затова virtual
};

