#include <iostream>
#include "list/linkedList.h"
#include "items/Animal.h"
//include std


int main() {
    //create a new linked list
    auto *list = new LinkedList<Animal>();
    // create 10 animals
    auto *dog = new Animal("Dog", 1, "Mammal");
    auto *cat = new Animal("Cat", 2, "Mammal");
    auto *fish = new Animal("Fish", 3, "Fish");
    auto *bird = new Animal("Bird", 4, "Bird");
    auto *snake = new Animal("Snake", 5, "Reptile");
    auto *lizard = new Animal("Lizard", 6, "Reptile");
    auto *frog = new Animal("Frog", 7, "Amphibian");
    auto *turtle = new Animal("Turtle", 8, "Reptile");
    auto *hamster = new Animal("Hamster", 9, "Mammal");
    auto *mouse = new Animal("Mouse", 10, "Mammal");
    // add animals to the list

    list->add(*snake);
    list->add(*mouse);
    list->add(*lizard);
    list->add(*dog);
    list->add(*bird);
    list->add(*turtle);
    list->add(*hamster);
    list->add(*fish);
    list->add(*cat);
    list->add(*frog);

    list->quickSort();
    list->print();


    return 0;
}
