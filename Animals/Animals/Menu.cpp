#include <iostream>
#include "Forest.h"
#include "Predator.h"
#include "Prey.h"

// Глобален указател към гората
Forest* P = nullptr;

int main() {
    Forest forest;
    P = &forest;

    std::cout << "Add animals...\n" << std::endl;

    // Добавяме животни
    
    // И двамата се хранят
    //forest.addAnimal(new Prey({ 2, 2 }, "Deer", 0, 3, 4, 4, 2, "Run"));
    //forest.addAnimal(new Prey({ 4, 1 }, "Goat", 0, 1, 6, 2, 4, "Kick")); 


    // Храни се само вълкът
    //forest.addAnimal(new Prey({ 2, 2 }, "Deer", 0, 3, 4, 4, 2, "Run")); 
    //forest.addAnimal(new Prey({ 14, 1 }, "Goat", 0, 1, 6, 2, 4, "Kick"));  


    // Храни се само тигърът
    //forest.addAnimal(new Prey({ 2, 2 }, "Deer", 0, 3, 4, 4, 2, "Run"));
    //forest.addAnimal(new Prey({ 15, 1 }, "Goat", 0, 1, 6, 2, 4, "Kick"));

    //forest.addAnimal(new Predator({ 7, 1 }, "Wolf", 1, 0, 6, 2, 3, 5, 1));
    //forest.addAnimal(new Predator({ 14, 2 }, "Tiger", 1, 0, 5, 2, 5, 8, 2)); 


    // Никой не се храни
    forest.addAnimal(new Prey({ 22, 22 }, "Deer", 0, 3, 4, 4, 2, "Run")); 
    forest.addAnimal(new Prey({ 15, 15 }, "Goat", 0, 1, 6, 2, 4, "Kick"));

    forest.addAnimal(new Predator({ 2, 1 }, "Wolf", 1, 0, 6, 2, 3, 5, 1));
    forest.addAnimal(new Predator({ 4, 2 }, "Tiger", 1, 0, 5, 2, 5, 8, 2));


    std::cout << "\n=== Day 1: Simulate one day ===\n" << std::endl;
    forest.PrintInfo();
    forest.simulateDay();

    std::cout << "\n=== Forest after one day ===\n" << std::endl;
    forest.PrintInfo();

    return 0;
}