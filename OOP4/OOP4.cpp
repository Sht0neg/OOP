#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Gadget {
public:
    string name;
    float price;
    float weight;

    Gadget(string name, float price, float weight) {
        this->name = name;
        this->price = price;
        this->weight = weight;
    };

    void print() {
        cout << "Название: " << this->name << endl;
        cout << "Цена: " << this->price << " руб" << endl;
        cout << "Вес: " << this->weight << " г" << endl;
    };

};

class Smartphone : public Gadget {
public:
    int RAM;
    string CPU;

    Smartphone(string name, float price, float weight, int RAM, string CPU) : Gadget(name, price, weight) {
        this->RAM = RAM;
        this->CPU = CPU;
    };

    void print() {
        Gadget::print();
        cout << this->RAM << endl;
        cout << this->CPU << endl;
    };

};

class Smartwatch : public Gadget {
public:
    bool pulseSensor;
    string wristStmpColor;
    Smartwatch(string name, float price, float weight, bool pulseSensor, string wristStmpColor) : Gadget(name, price, weight) {
        this->pulseSensor = pulseSensor;
        this->wristStmpColor = wristStmpColor;
    };
    void print() {
        Gadget::print();
        cout << "Наличие пульсометра: " << this->pulseSensor << endl;
        cout << "Цвет ремешка: " << this->wristStmpColor << endl;
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*Smartphone* iphone = new Smartphone("iPhone 15", 140000, 171, 6, "&");
    iphone->print();*/
    Smartwatch* watch = new Smartwatch("Apple Watch Series 8", 45990, 32, true, "black night");
    watch->print();
}

