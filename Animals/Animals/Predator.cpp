#include <iostream>
#include <cstring>
#include "Predator.h"
#include "Forest.h"


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
    // Хищникът е сит - не яде
    if (hungry == 1) return;

    for (int i = 0; i < P->animalCount;) {
        // Проверка дали още е гладен
        if (foodSupplyPerMeal > 0) {
            Animal* potentialPrey = P->animals[i];

            // Не яде себе си и само тревопасни (type == 0)
            if (potentialPrey != this && potentialPrey->type == 0) {
                int dx = Position.x - potentialPrey->Position.x;
                int dy = Position.y - potentialPrey->Position.y;
                double distance = std::sqrt(dx * dx + dy * dy);

                if (distance <= foodArea) {
                    // Преместваме се на позицията на тревопасното
                    Position = potentialPrey->Position;

                    P->removeAnimal(i);
                    
                    foodSupplyPerMeal--;

                    // Ако вече не е гладен, отбелязваме го
                    if (foodSupplyPerMeal == 0) {
                        hungry = 1;
                    }

                    continue; 
                }
            }
        }

        i++; 
    }
    if (foodSupplyPerMeal > 0) {
        hungry = 0;
    }
}

void Predator::PrintInfo() {
    std::cout << "----- Animal information -----" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Moovment speed: " << movementSpeed << std::endl;
    std::cout << "Food per meal: " << foodSupplyPerMeal << std::endl;
    std::cout << "FoodArea: " << foodArea << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Position: (" << Position.x << ", " << Position.y << ")" << std::endl;
}