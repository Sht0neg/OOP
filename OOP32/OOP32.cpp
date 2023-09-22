#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Transport {
public:
    float speed;
    int capacity;
    void move();
    void print();
    Transport(float speed, int capacity);
};

Transport::Transport(float speed, int capacity) {
    this->speed = speed;
    this->capacity = capacity;
};

void Transport :: move() {
    cout << "Как двигаться!\n";
}

void Transport::print() {
    cout << "Скорость: " << this->speed << "км/ч, вместимость: " << this->capacity << endl;
}

class Car : public Transport {
public:
    int mileage;
    void move();
    void print();
    Car(float speed, int capacity, int mileage);
};

Car::Car(float speed, int capacity, int mileage) : Transport(speed, capacity) {
    this->speed = speed;
    this->capacity = capacity;
    this->mileage = mileage;
};

void Car::move() {
    cout << "Врум-врум!\n";
}

void Car::print() {
    cout << "Скорость: " << this->speed << "км/ч, вместимость: " << this->capacity << ", пробег: " << this->mileage << endl;
}

class Plane : public Transport {
public:
    int turbines_count;
    void move();
    void print();
    Plane(float speed, int capacity, int turbines_count);
};

Plane::Plane(float speed, int capacity, int turbines_count) : Transport(speed, capacity) {
    this->speed = speed;
    this->capacity = capacity;
    this->turbines_count = turbines_count;
};

void Plane::move() {
    cout << "Флю-флю!\n";
}

void Plane::print() {
    cout << "Скорость: " << this->speed << "км/ч, вместимость: " << this->capacity << ", кол-во турбин: " << this->turbines_count << endl;
}

class Train : public Transport {
public:
    int carriages_count;
    void move();
    void print();
    Train(float speed, int capacity, int carriages_count);
};

Train::Train(float speed, int capacity, int carriages_count) : Transport(speed, capacity) {
    this->speed = speed;
    this->capacity = capacity;
    this->carriages_count = carriages_count;
};

void Train::move() {
    cout << "Чух-чух!\n";
}

void Train::print() {
    cout << "Скорость: " << this->speed << "км/ч, вместимость: " << this->capacity << ", кол-во вагонов: " << this->carriages_count << endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car c1(100, 4, 25000);
    c1.move();
    c1.print();

    Plane p1(360, 200, 4);
    p1.move();
    p1.print();

    Train t1(150, 150, 21);
    t1.move();
    t1.print();
}

