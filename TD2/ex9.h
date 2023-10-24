//
// Created by unknow on 10/23/2023.
//

#ifndef C_EX9_H
#define C_EX9_H
#include <string>
#include <iostream>

using std::string, std::cout , std::endl;

class Animal {


//    ~Animal();
private:
    string Name;
    int age;

public:
    Animal(string name, int age) : Name(name), age(age) {}

     void set_value(){}

};

// zebra

class Zebra : public Animal{
private:
    string origin;
public:
    Zebra(int Age, string Name): Animal(Name,Age) {}

    void set_value(string ori) {
    this->origin=ori;
    };

};

// dolphin
class Dolphin:public Animal{
private:
    string origin;
public:
    Dolphin(int age, string name): Animal(name,age) {}

    void set_value(string ori) {
    this->origin=ori;
    };
};
#endif //C_EX9_H
