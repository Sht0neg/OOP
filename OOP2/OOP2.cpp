#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Person {
public:
    int age;
    string name;
    string surname;
    string gender;

    void print() {
        cout << name << " " << surname << ", age: " << age << ", gender: " << gender << endl;
    }

    Person(int, string, string, string);
};

Person::Person(int age, string name, string surname, string gender) {
    this->age = age;
    this->name = name;
    this->surname = surname;
    this->gender = gender;
};

class Car {
private:
    int year;
public:
    string model;
    string type;
    string color;
    int max_speed;
    void print() {
        cout << "Марка: " << model << "\nТип: " << type << "\nЦвет: " << color << "\nМаксимальная скорость: " << max_speed << " км/ч\n" << "Год выпуска: " << year << "\n" << endl;
    }

    Car(string, string, string, int, int);

};

Car::Car(string model, string type, string color, int max_speed, int year) {
    this->model = model;
    this->type = type;
    this->color = color;
    this->max_speed = max_speed;
    this->year = year;
    if (year < 1900 || year > 2023) {
        this->year = 2023;
    }
};

class Animal {
public:
    int age;
    string gender;
    Animal(int, string);
};

Animal::Animal(int age, string gender) {
    this->age = age;
    this->gender = gender;
}

class Cat : public Animal {
public:
    string color;
    Cat(int age, string gender, string color) : Animal(age, gender) {
        this->color = color;
    }

};
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    /*Person pr1;
    pr1.age = 23;
    pr1.name = "Ivan";
    pr1.surname = "Ivanov";
    pr1.gender = "male";

    cout << pr1.name << " " << pr1.surname << ", age: " << pr1.age << ", gender: " << pr1.gender << endl;
    */
    //Person pr1(23, "Ivan", "Ivanov", "male");
    Car cr1("BMW", "фура", "красный", 150, 1254);
    cr1.print();
}

