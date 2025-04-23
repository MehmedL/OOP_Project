#include "Prey.h"
#include <iostream>
#include <string.h>

Prey::Prey() : Animal() {
    strcpy_s(deffenseWay, "None");
}

Prey::Prey(const TPoint Position, char* pName, int fed, int speed, int foodPerMeal, int eatingArea, int years, const char* defWay)
    : Animal(Position, pName, 0, fed, speed, foodPerMeal, eatingArea, years) {
    strcpy_s(deffenseWay, defWay);
}

Prey::~Prey() {
    // Няма нужда от специално изчистване
}

void Prey::Eat() {
    if (hungry == 0 && foodSupplyPerMeal > 0) {
        foodSupplyPerMeal--;
        if (foodSupplyPerMeal == 0)
            hungry = 1;
    }
}

void Prey::PrintInfo() {
    std::cout << "Animal name: " << name << std::endl;
    std::cout << "Animal - Position: (" << Position.x << ", " << Position.y << ")" << std::endl;
    std::cout << "Animal type: Herbivore" << std::endl;
    std::cout << "Hungry: " << (hungry ? "NO" : "YES") << std::endl;
    if (!hungry)
        std::cout << "Meals needed to be full: " << foodSupplyPerMeal << std::endl;
    std::cout << "Animal movement speed: " << movementSpeed << std::endl;
    std::cout << "Animal food area (in meters): " << foodArea << std::endl;
    std::cout << "Animal age: " << age << std::endl;
    std::cout << "Defense way: " << deffenseWay << std::endl;
}
