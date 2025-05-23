#include "Forest.h"
#include <iostream>


// ����������� � ������������ ������ � nullptr � ������ animalCount �� 0
Forest::Forest() : animalCount(0) {
    for (int i = 0; i < MAX_ANIMALS; i++) {
        animals[i] = nullptr;
    }
}

// ���������� � ����������� ������� �� ������ �������, ����� �� ���� �������� � ������
Forest::~Forest() {
    for (int i = 0; i < animalCount; i++) {
        delete animals[i];
    }
}

// ��������� ���������� �� ����� �������, �������� � ������
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

// ������ ���� ������� � ������, ��� ����� �� ��������� MAX_ANIMALS
void Forest::addAnimal(Animal* a) {
    if (animalCount < MAX_ANIMALS) {
        animals[animalCount++] = a;
    }
    else {
        std::cout << "Can not include more animals!" << std::endl;
    }
}

// �������� ������� �� ������ �� ����� ������, �������������� ������� � ���������� �� ���������� ��������
void Forest::removeAnimal(int index) {
    if (index < 0 || index >= animalCount) {
        std::cout << "Error: invalid index!" << std::endl;
        return;
    }

    delete animals[index];
    // ���������� ���������� � ������, �� �� �������� "�����"
    for (int i = index; i < animalCount - 1; i++) {
        animals[i] = animals[i + 1];
    }
    animals[animalCount - 1] = nullptr;
    animalCount--;
}

// �������� ���� ��� � ������: ����� ������� �� ����� ���� ��������� �� ������ Eat
void Forest::simulateDay() {
    std::cout << "One day simulation:" << std::endl;
    for (int i = 0; i < animalCount; i++) {
        if (animals[i]) {
            animals[i]->Eat();
        }
    }
}