#pragma once

#include "Animal.h"

class Forest;
extern Forest* P;

class Forest {
public:
    static const int MAX_ANIMALS = 30;  // ���������� ��������� �� ������
    Animal* animals[MAX_ANIMALS];       // �������� ����� �� ��������� ��� �������
    int animalCount;                    // ���� �������� �������


    // ����������� �� ������������ � ������������ ������ � ������
    Forest();

    // ���������� � ����������� ������� �� ������ ������� � ������
    ~Forest();

    // �����, ����� ��������� ���������� �� ������ ������� � ����
    void PrintInfo() const;

    // �����, ����� ������ ���� ������� � ������, ��� ��� �������� �����
    void addAnimal(Animal* a);

    // �����, ����� ���������� (��������) ������� �� ������ �� ����� ������
    void removeAnimal(int index);

    // �����, ����� �������� ���� ��� � �� ����� ������� ������� ������� ����� Eat
    void simulateDay();
};