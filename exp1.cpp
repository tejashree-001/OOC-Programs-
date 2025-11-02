#include<iostream>
using namespace std;
class student{
    private:
    char name[30];
    int rollno;
    float marks;

    public:
    //member function to input student details
    void inputDetails(){
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter marks:";
        cin>>marks;
    }
    //members function to display student details

    void displayDetails(){
        cout<<"Student Name:"<<name<<endl;
        cout<<"Roll number:"<<rollno<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};

int main()
{
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    cout<<"batch: S1"<<endl;
    student studentObj;
    //Input student details
    studentObj.inputDetails();
    //Display student details
    cout<<"\n Student Details:\n";
    studentObj.displayDetails();
    return 0;
}