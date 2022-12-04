//
// Created by Lucas Garcia on 02/12/2022.
//

#include <string>
#include <iostream>

#ifndef CPP_SANDBOX_ANIMAL_H
#define CPP_SANDBOX_ANIMAL_H

#endif //CPP_SANDBOX_ANIMAL_H

// create a class that represents an animal
// the class should have a name, age, and type with getters and setters
// the class should have a print function that prints the name, age, and type
// the class should implement == and != operators

class Animal {
private:
    std::string name;
    int age;
    std::string type;
public:
    Animal() {
        this->name = "";
        this->age = 0;
        this->type = "";
    }

    Animal(std::string name, int age, std::string type) {
        this->name = name;
        this->age = age;
        this->type = type;
    }

    ~Animal() {

    }

    void print() {
        std::cout << "Age: " << age << std::endl;
    }

    std::string getName() {
        return name;
    }

    void setName(std::string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        this->age = age;
    }

    std::string getType() {
        return type;
    }

    void setType(std::string type) {
        this->type = type;
    }

    bool operator==(const Animal &rhs) const {
        return name == rhs.name &&
               age == rhs.age &&
               type == rhs.type;
    }

    bool operator!=(const Animal &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Animal &rhs) const {
        return age < rhs.age;
    }

    bool operator <= (const Animal &rhs) const {
        return age <= rhs.age;
    }

    bool operator>(const Animal &rhs) const {
        return rhs < *this;
    }

    std::string toString() {
        return "Name: " + name + ", Age: " + std::to_string(age) + ", Type: " + type;
    }
};