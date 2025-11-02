#include<iostream>
using namespace std;

class Vehicle{
    public:
        Vehicle()
        {
            cout<<"This is a Vehicle\n";
        }
};

class FourWheeler{
    public:
        FourWheeler()
        {
             cout<<"This is a 4 wheeler \n";
        }
};

class Car: public Vehicle,public FourWheeler  {
    public:
    Car() {
        cout<<"This 4 Wheeler Vehicle is a Car\n";
    }
};

int main()
{
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    Car obj;
    return 0;
}