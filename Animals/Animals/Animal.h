#pragma once
class Animal
{
protected:
	char *name;																				// � ��������� �����
	int movementSpeed;
	int foodSupplyPerMeal;
	int foodArea;
	int age;

public:
	Animal();																				// default constructor
	Animal(char* name, int movementSpeed, int foodSupplyPerMeal, int foodArea, int age);	// constructor � ���������
	Animal(const Animal &animal);															// copy constructor
	~Animal();																				// destrucor
	virtual void Feed();																	// �� �� ��������� � �� � overriden, ������ virtual
	virtual void PrintInfo();																// �� �� ��������� � �� � overriden, ������ virtual
};

