#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculate() = 0;
};

class Circle : public Shape {
protected:
    double radius, total;

public:
    void setData() {
        cout << "Enter the value of radius: ";
        cin >> radius;
    }

    void calculate() {
        total = 3.14 * radius * radius;
        cout << "The area of the circle is: " << total << endl;
    }
};

class Rectangle : public Shape {
protected:
    double length, width, total;

public:
    void setData() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the width: ";
        cin >> width;
    }

    void calculate() {
        total = length * width;
        cout << "The area of the rectangle is: " << total << endl;
    }
};

int main() {
    Circle c;
    cout << "For Circle:" << endl;
    c.setData();
    c.calculate();

    Rectangle r;
    cout << "For Rectangle:" << endl;
    r.setData();
    r.calculate();

    return 0;
}

