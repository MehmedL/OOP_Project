#include <iostream>
#include <cstring>
#include "Predator.h"


Predator::Predator() : Animal() {
    attackWeapon = 0;
}


Predator::Predator(const TPoint& Position, const char* name, int type, int fed, int movementSpeed,
	int foodSupplyPerMeal, int foodArea, int age, int weapon)
    : Animal(Position, name, type, fed, movementSpeed, foodSupplyPerMeal, foodArea, age)
    
{
    attackWeapon(weapon)
}





void Predator::Eat() {
    for (int i = 0; i < P->count; i++) {
        if (P->Table[i]->type == 0 && P->Table[i]->foodSupplyPerMeal > 0 && Position != i) {

            if (P->Table[i]->Position.x > P->Table[i]->Position.x - P->Table[i]->foodArea && i < P->Table[i]->Position.x < P->Table[i]->Position.x + P->Table[i]->foodArea &&
                i < P->Table[i]->Position.y > Position.y - foodArea && i < P->Table[i]->Position.y < Position.y + foodArea) {

                for (int j = i; j < P->count - 1; j++) {
                    P->Table[j] = P->Table[j + 1];
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