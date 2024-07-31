#include <iostream>
using namespace std;
// Base class: Shape
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class: Rectangle (inherits from Shape)
class Rectangle : public Shape {
public:
    void displayRectangle() {
        cout << "This is a rectangle." << endl;
    }
};

// Derived class: Square (inherits from Rectangle)
class Square : public Rectangle {
public:
    void displaySquare() {
        cout << "This is a square." << endl;
    }
};

int main() {
    Square square;
    square.display();          // Accessing base class method
    square.displayRectangle(); // Accessing method from intermediate class
    square.displaySquare();    // Accessing method from derived class
    return 0;
}
