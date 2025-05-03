#pragma once

struct TPoint {
	int x;
	int y;
};

class Animal
{
protected:
	TPoint Position;
	char *name;																				// с динамична памет
	int type;																				// 0 за тревопасно и 1 за хищник
	int hungry;																				// 0 за гладен и 1 за сит
	int movementSpeed;
	int foodSupplyPerMeal;
	int foodArea;
	int age;

public:
	Animal();																				// default constructor
	Animal(const TPoint& Position,const char* name, int type, int fed, int movementSpeed, int foodSupplyPerMeal, int foodArea, int age);	// constructor с параметри
	Animal(const Animal &animal);															// copy constructor
	~Animal();																				// destrucor
	virtual void Eat();																		// ще се наследява и ще е overriden, затова virtual
	virtual void PrintInfo();																// ще се наследява и ще е overriden, затова virtual
};

