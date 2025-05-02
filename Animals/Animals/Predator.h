#pragma once
#include "Animal.h"
class Predator : public Animal
{
    int attackWeapon; // Средство за нападение

public:
    Predator();
    
    Predator(const TPoint& position, const char* name, int type, int fed, int movementSpeed,
        int foodSupplyPerMeal, int foodArea, int age, int weapon);


    // Пренаписани (override) методи:
    virtual void Eat() override;
    virtual void PrintInfo() override;

	
};




