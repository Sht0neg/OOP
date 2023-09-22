#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Eat {
public:
    string name;
    float price;
    float calories;

    Eat(string name, float price, float calories) {
        this->name = name;
        this->price = price;
        this->calories = calories;
    };

    void print() {
        cout << "Название: " << this->name << endl;
        cout << "Цена: " << this->price << " руб" << endl;
        cout << "Калории: " << this->calories << endl;
    };

};

class Burger : public Eat {
public:
    string sause;
    string cutlet;

    Burger(string name, float price, float calories, string sause, string cutlet) : Eat(name, price, calories) {
        this->sause = sause;
        this->cutlet = cutlet;
    };

    void print() {
        Eat::print();
        cout << "Соус: " << this->sause << endl;
        cout << "Котлета: " << this->cutlet << endl;
    };

};

class Pizza : public Eat {
public:
    string topping;
    float diametr;
    Pizza(string name, float price, float calories, string topping, float diametr) : Eat(name, price, calories) {
        this->topping = topping;
        this->diametr = diametr;
    };
    void print() {
        Eat::print();
        cout << "Наполнение: " << this->topping << endl;
        cout << "Диаметр: " << this->diametr << endl;
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Burger* b1 = new Burger("Чизбургер", 89, 1150, "кетчуп", "мясо");
    Pizza* p1 = new Pizza("Маргарита", 550, 1150, "сыр, колбаса, шампиньоны, зелень, помидоры", 15);
    b1->print();
    cout << endl;
    p1->print();
}
