#pragma once

struct TPoint {
	int x;
	int y;
};

class Animal
{
public:
	TPoint Position;
	int type;
protected:
	
	char *name;																				// � ��������� �����																		// 0 �� ���������� � 1 �� ������
	int hungry;																				// 0 �� ������ � 1 �� ���
	int movementSpeed;
	int foodSupplyPerMeal;
	int foodArea;
	int age;


public:
	Animal();																				// default constructor
	Animal(const TPoint& Position,const char* name, int type, int hungry, int movementSpeed, int foodSupplyPerMeal, int foodArea, int age);	// constructor � ���������
	Animal(const Animal &animal);															// copy constructor
	~Animal();																				// destrucor
	virtual void Eat();																		// �� �� ��������� � �� � overriden, ������ virtual
	virtual void PrintInfo();																// �� �� ��������� � �� � overriden, ������ virtual
};

