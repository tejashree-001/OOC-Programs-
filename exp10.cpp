#include <iostream>   // Include necessary header for input/output stream
#include <cmath>      // Include necessary header for mathematical functions
using namespace std;

const double PI = 3.14159;  // Define constant value for PI

// Base class named Shape
class Shape {
public:
    // Pure virtual functions
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

// Derived class Circle inheriting from Shape
class Circle : public Shape {
private:
    double radius;  // Private member variable to store the radius of the circle

public:
    // Constructor
    Circle(double rad) : radius(rad) { }

    // Override to calculate area
    double calculateArea() const override {
        return PI * pow(radius, 2);
    }

    // Override to calculate perimeter
    double calculatePerimeter() const override {
        return 2 * PI * radius;
    }
};

// Derived class Rectangle inheriting from Shape
class Rectangle : public Shape {
private:
    double length; // Private member variable to store the length
    double width;  // Private member variable to store the width

public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) { }

    // Override to calculate area
    double calculateArea() const override {
        return length * width;
    }

    // Override to calculate perimeter
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class Triangle inheriting from Shape
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) { }

    // Override to calculate area using Heron's formula
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2; // Semi-perimeter
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    // Override to calculate perimeter
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    // Create instances of different shapes
    Circle circle(7.0);            // Circle with radius 7.0
    Rectangle rectangle(4.2, 8.0); // Rectangle with length 4.2 and width 8.0
    Triangle triangle(4.0, 4.0, 3.2); // Triangle with sides 4.0, 4.0, 3.2
    

    // Display results
    cout << "Circle:" << endl;
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Perimeter: " << circle.calculatePerimeter() << endl;

    cout << "\nRectangle:" << endl;
    cout << "Area: " << rectangle.calculateArea() << endl;
    cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "\nTriangle:" << endl;
    cout << "Area: " << triangle.calculateArea() << endl;
    cout << "Perimeter: " << triangle.calculatePerimeter() << endl;

    

    return 0;
}
