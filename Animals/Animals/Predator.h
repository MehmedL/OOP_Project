#pragma once
#include "Animal.h"
class Predator : public Animal
{
    int attackWeapon; // �������� �� ���������

public:
    Predator();
    
    Predator(const TPoint& position, const char* name, int type, int fed, int movementSpeed,
        int foodSupplyPerMeal, int foodArea, int age, int weapon);


    // ����������� (override) ������:
    virtual void Eat() override;
    virtual void PrintInfo() override;

	
};




