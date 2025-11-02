#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    Vehicle() {
        cout << "This is a Vehicle" << endl;
    }
};

// First subclass
class Car : public Vehicle {
public:
    Car() {
        cout << "This Vehicle is a Car" << endl;
    }
};

// Second subclass
class Bus : public Vehicle {
public:
    Bus() {
        cout << "This Vehicle is a Bus" << endl;
    }
};

// Main function
int main() { 
     cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;     

    // Creating object of subclass will
    // invoke the constructor of base class
    Car obj1;
    Bus obj2;
    return 0;
}