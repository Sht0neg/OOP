#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

class Point {
public:
    int x;
    int y;

    void print() {
        cout << "Точка с координатами: " << x << ", " << y << endl;
    }

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    Point operator + (const Point& point) {
        int newx = this->x + point.x;
        int newy = this->y + point.y;
        return Point(newx, newy);
    }
    Point operator - () {
        return Point(-x, -y);
    }
    Point operator - (const Point& point) {
        int newx = this->x - point.x;
        int newy = this->y - point.y;
        return Point(newx, newy);
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Point p1(10, 10);
    p1.print();

    Point p2(5, 5);
    p2.print();

    Point p3 = p2 + p1;
    p3.print();

    Point p4 = p2 - p3;
    p4.print();

    Point p5 = -p4;
    p5.print();
}

