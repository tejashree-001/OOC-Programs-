#include <iostream>
using namespace std;

// Base class
class Person {
public:
    Person() {
        cout << "Person's constructor called" << endl;
    }
};

// Derived class 1: Faculty
class Faculty : public Person {
public:
    Faculty() {
        cout << "Faculty's constructor called" << endl;
    }
};

// Derived class 2: Student
class Student : public Person {
public:
    Student() {
        cout << "Student's constructor called" << endl;
    }
};

// Derived class 3: TA (inherits from both Faculty and Student)
class TA : public Faculty, public Student {
public:
    TA() {
        cout << "TA's constructor called" << endl;
    }
};

// Main function
int main() {
    
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;

    TA ta; // Creating an object of TA
    return 0;
}