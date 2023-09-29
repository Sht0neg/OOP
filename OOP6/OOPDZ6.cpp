#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include <random>

using namespace std;

class Clone {
public:
    string name;
    int id;
    void print() {
        cout << "Name: " << this->name << " ID: " << this->id << endl;
    }
    Clone(string name, int id) {
        this->name = name;
        this->id = id;
    }
    Clone(const Clone& clone) {
        srand(time(0));
        string namelist[3] = { "Mark", "Oleg", "Sasha" };
        int randindex = rand() % 3;
        this->name = namelist[randindex];
        this->id = clone.id + 1;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Clone clone("Artem", 0);
    clone.print();
    Clone clone2 = clone;
    clone2.print();
    Clone clone3(clone2);
    clone3.print();
}
