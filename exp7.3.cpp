#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle\n";
    }
};

// base class
class Fare {
public:
    Fare() {
        cout << "Fare of Vehicle\n";
    }
};

// first subclass
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car\n";
    }
};

// second subclass
class Bus : public Vehicle, public Fare {
public:
    Bus() {
        cout << "This Vehicle is a Bus with Fare\n";
    }
};

// main function
int main() {
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    // Creating object of subclass will invoke constructors of base classes
    Bus obj2;
    return 0;
}

