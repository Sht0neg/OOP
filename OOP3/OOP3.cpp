#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Animal{
public:
    string name;
    int age;
    bool furi;
    void say();
    void eat();
};
void Animal::say(){
    cout << "Я не умею разговаривать!\n";
};

void Animal::eat() {
    cout << "Я не знаю что кушать!\n";
};

class Dog : public Animal {
public:
    int paus;
    void say() {
        cout << "Гав-гав\n";
    };
};

class Fish : public Animal {
public:
    void say() {
        cout << "Буль-будь\n";
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


}
