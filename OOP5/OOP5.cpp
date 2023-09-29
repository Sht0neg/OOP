#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Game {
public:
    string name;
    int year;
    void print() {
        cout << "\n   Title: " << this->name << "\n   Year: " << this->year << "\n\n";
    };
    Game(string name, int year) {
        this->name = name;
        this->year = year;
    };
};


Game g("L", 2003);

class Character {
private:
    string secret;
public:
    string name;
    int age;
    Game* source;
    void print() {
        cout << "Name: " << this->name << "\nAge: " << this->age << "\nSource: ";
        this->source->print();
    };
    Character(string name, int age, Game &source);
    Character(const Character& character) {
        this->name = character.name;
        this->age = character.age;
        this->source = &g;
    };
    Character(string name, int age) {
        this->name = name;
        this->age = age;
        this->source = &g;
    };
};

Character::Character(string name, int age, Game &source) {
    this->name = name;
    this->age = age;
    this->source = &source;
};

Game dota("Dota", 2013);

class DotaCharacters : public Character{
public:
    string attribute;
    string attack_range;
    DotaCharacters(string name, int age, string attribute, string attack_range) : Character(name, age) {
        this->attack_range = attack_range;
        this->attribute = attribute;
        this->source = &dota;
    }
    void print() {
        cout << "Name: " << this->name << "\nAge: " << this->age << "\nAttribute: " << this->attribute << "\nAttack Range: " << this->attack_range << "\nPlay: ";
        this->source->print();
    };
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    /*Game* g1 = new Game("Play1", 2013);

    Character* c1 = new Character("L", 19, *g1);
    c1->print();

    Character* c2 = c1;
    c2->age = 20;
    c2->print();

    Character* c3(c2);
    c3->print();
    */

    DotaCharacters* hero = new DotaCharacters("Anti-mage", 25, "Agility", "Low distance");
    hero->print();
}


