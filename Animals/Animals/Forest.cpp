#include "Forest.h"
#include <iostream>


// Конструктор – инициализира масива с nullptr и брояча animalCount на 0
Forest::Forest() : animalCount(0) {
    for (int i = 0; i < MAX_ANIMALS; i++) {
        animals[i] = nullptr;
    }
}

// Деструктор – освобождава паметта за всички животни, които са били добавени в масива
Forest::~Forest() {
    for (int i = 0; i < animalCount; i++) {
        delete animals[i];
    }
}

// Отпечатва информация за всяко животно, добавено в гората
void Forest::PrintInfo() const {
    std::cout << "Information:" << std::endl;
    for (int i = 0; i < animalCount; i++) {
        std::cout << "Animal " << i << ":" << std::endl;
        if (animals[i]) {
            animals[i]->PrintInfo();
        }
        std::cout << std::endl;
    }
}

// Добавя ново животно в масива, ако броят не надвишава MAX_ANIMALS
void Forest::addAnimal(Animal* a) {
    if (animalCount < MAX_ANIMALS) {
        animals[animalCount++] = a;
    }
    else {
        std::cout << "Can not include more animals!" << std::endl;
    }
}

// Премахва животно от масива по даден индекс, освобождавайки паметта и изместване на останалите елементи
void Forest::removeAnimal(int index) {
    if (index < 0 || index >= animalCount) {
        std::cout << "Error: invalid index!" << std::endl;
        return;
    }

    delete animals[index];
    // Изместваме елементите в масива, за да избегнем "дупки"
    for (int i = index; i < animalCount - 1; i++) {
        animals[i] = animals[i + 1];
    }
    animals[animalCount - 1] = nullptr;
    animalCount--;
}

// Симулира един ден в гората: всяко животно се храни чрез извикване на метода Eat
void Forest::simulateDay() {
    std::cout << "One day simulation:" << std::endl;
    for (int i = 0; i < animalCount; i++) {
        if (animals[i]) {
            animals[i]->Eat();
        }
    }
}