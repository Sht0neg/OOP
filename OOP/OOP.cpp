#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <Windows.h>
#include <cmath>


using namespace std;

class Tank {
    public:
        string country;
        int mass;
        int engine_power;
        void print();
        Tank(string country, int mass, int engine_power);
    private:
};

void Tank::print() {
    cout << "Manufacturer country: " << this->country << "\n" << "Mass: " << this->mass << "\n" << "Engine power: " << this->engine_power << "\n\n";
}

Tank::Tank(string country, int mass, int engine_power) {
    this->country = country;
    this->mass = mass;
    this->engine_power = engine_power;
}

class Rectangle {
public:
    double area;
    double perimetr;
    void print();
    Rectangle(double a, double b);
private:
    double a;
    double b;
    void setArea();
    void setPerimetr();
};

Rectangle::Rectangle(double a, double b) {
    this->a = a;
    this->b = b;
    this->setArea();
    this->setPerimetr();
}

void Rectangle::setArea() {
    this->area = this->a * this->b;
}

void Rectangle::setPerimetr() {
    this->area = 2 * (this->a + this->b);
}

void Rectangle::print() {
    cout << "Area: " << this->area << "\n" << "Perimetr: " <<  this->perimetr << "\n\n";
}

class Circle {
public:
    double circumference;
    double area;
    void print();
    Circle(double r);
private:
    double r;
    void setArea();
    void setCircumference();
};

Circle::Circle(double r) {
    this->r = r;
    this->setArea();
    this->setCircumference();
}

void Circle::setArea() {
    this->area = M_PI * pow(this->r, 2);
}

void Circle::setCircumference() {
    this->circumference = 2 * M_PI * this->r;
}

void Circle::print() {
    cout << "Area: " << this->area << "\n" << "Circumference: " << this->circumference << "\n\n";
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Tank t1("USSR", 36, 580);
    t1.print();

    Tank t2("Russia", 46, 1250);
    t2.print();

    Tank t3("Germany", 59.9, 1500);
    t3.print();

    Circle c1(5);
    c1.print();
}

