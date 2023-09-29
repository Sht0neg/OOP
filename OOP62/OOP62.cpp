#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <time.h>
#include <random>

using namespace std;

class Figure {
public:
    vector <float> sides;
    float Perimetr() {
        float p = 0;
        for (auto i : this->sides) {
            p += i;
        }
        return p;
    }
    Figure(vector <float> sides) {
        this->sides = sides;
    }
};

class Triangle : public Figure {
public:
    //Если будет введен массив больше чем из 3 чисел, то возьмуться первые 3 значения 
    Triangle(vector <float> sides) : Figure(sides){
        for (int i = 0; i < 3; i++) {
            this->sides.push_back(sides[i]);
        }
    }
    float operator + (Triangle& triangle) {
        return(this->Perimetr() + triangle.Perimetr());
    }
    void print() {
        cout << "Стороны треугольника : " << sides[0] << ", " << sides[1] << ", " << sides[2] << ", " << "Периметр: " << this->Perimetr() << endl;
    }
};

class Square : public Figure {
public:
    float a;
    Square(float a) : Figure(sides){
        this->sides = { a, a, a, a };
    }
    float Perimetr() {
        return a * 4;
    }
    float operator + (Square& sq) {
        return(this->a * 4 + sq.a * 4);
    }
    void print() {
        cout << "Сторона квадрата : " << a << "Периметр: " << this->Perimetr() << endl;
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    vector <float> a;
    for (int i = 0; i < 3; i++) {
        a.push_back((rand() % 100 + 10) / 10);
    };
    Triangle tr1(a);
    tr1.print();

    vector <float> b;
    for (int i = 0; i < 3; i++) {
        b.push_back((rand() % 100 + 10) / 10);
    };
    Triangle tr2(b);
    tr2.print();

    cout << "Сумма периметров двух треугольников: " << tr1 + tr2 << endl;

    Square s1(5.26);
    s1.print();

    Square s2(4.14);
    s2.print();

    cout << "Сумма периметров двух квадратов: " << s1 + s2 << endl;
}


