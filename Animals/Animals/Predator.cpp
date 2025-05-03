#include <iostream>
#include <cstring>
#include "Predator.h"
#include "Forest.h"

extern Forest* P;

Predator::Predator() : Animal() {
    attackWeapon = 0;
}


Predator::Predator(const TPoint& Position, const char* name, int type, int fed, int movementSpeed,
	int foodSupplyPerMeal, int foodArea, int age, int weapon)
    : Animal(Position, name, type, fed, movementSpeed, foodSupplyPerMeal, foodArea, age)
    
{
    this->attackWeapon = weapon;

}


void Predator::Eat() {
    for (int i = 0; i < P->animalCount; i++) {
        if (P->animals[i]->type == 0 && P->animals[i]->foodSupplyPerMeal > 0 && Position != P->animals[i]->Position) {

            if (P->animals[i]->Position.x > P->animals[i]->Position.x - foodArea && i < P->animals[i]->Position.x < P->animals[i]->Position.x + P->animals[i]->foodArea &&
                i < P->animals[i]->Position.y > Position.y - foodArea && i < P->animals[i]->Position.y < Position.y + foodArea) {

                for (int j = i; j < P->animalCount - 1; j++) {
                    P->animals[j] = P->animals[j + 1];
                }
                foodSupplyPerMeal--;
            }
        }

        if (foodSupplyPerMeal == 0) {
            hungry = 1;
        }
    }

}


void Predator::PrintInfo() {
    std::cout << "----- Информация за животното -----" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Moovment speed: " << movementSpeed << std::endl;
    std::cout << "Food per meal: " << foodSupplyPerMeal << std::endl;
    std::cout << "FoodArea: " << foodArea << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Position: (" << Position.x << ", " << Position.y << ")" << std::endl;
}