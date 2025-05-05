#pragma once
#include "Animal.h"

class Prey : public Animal
{
    char deffenseWay[20];

public:
    Prey();
    Prey(const TPoint Position, const char* name, int fed, int movementSpeed, int foodSupplyPerMeal, int foodArea, int age, const char* deffenseWay);
    ~Prey();
    void Eat() override;
    void PrintInfo() override;
};
