#include<iostream>
#include<stdio.h>
using namespace std;

class Student
{
    int roll;
    char name[30];

    public:
    void getdata()
    {
        cout<<"\n_ _ _ _ _ _ _ _  _ _ _";
        cout<<"\n Enter roll no.    ";
        cin>>roll;
        cout<<"\nEnter student name:     ";
        cin>>name; 
    }

    void putdata()
        {
            cout<<"\n_  _ _ _ _ _ _ _ _ _ _ _ ";
            cout<<"\n************Student Marklist****************";
            cout<<"\n Roll no.    :"<<roll;
            cout<<"\n Student name    "<<name<<endl;

        }
    
};

class StudentExam : public Student  //class student exam deriverd from class student 
{
    public:
      int sub1,sub2,sub3,sub4,sub5,sub6;
      float per;
    public:
      void accept_data()
      {
        getdata();
        cout<<"\n Enter marks for subject 1:";
        cin>>sub1;
        cout<<"\n Enter marks for subject 2:";
        cin>>sub2;
        cout<<"\n Enter marks for subject 3:";
        cin>>sub3;
        cout<<"\n Enter marks for subject 4:";
        cin>>sub4;
        cout<<"\n Enter marks for subject 5:";
        cin>>sub5;
        cout<<"\n Enter marks for subject 6:";
        cin>>sub6;
      }  

      void display_data()
    {
        putdata();
        cout<<"\n marks for subject 1:"<<sub1;
        cout<<"\n marks for subject 2:"<<sub2;
        cout<<"\n marks for subject 3:"<<sub3;
        cout<<"\n marks for subject 4:"<<sub4;
        cout<<"\n marks for subject 5:"<<sub5;
        cout<<"\n marks for subject 6:"<<sub6;

    } 
};
class StudentResult: public StudentExam 
{

    public:
    void calculate()
    {
    per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
    cout<<"\n\n Total Percentage is:   "<<per;
    cout<<"\n _ _ _ _ _ _ _ _ _ _ _ _\n";
    }

};

int main()
{
     cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;

    StudentResult str;
    int cnt,i;
    cout<<"\n Enter number of student you want ?:";
    cin>>cnt;
    for(i=0;i<cnt;i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }
    
    return 0;

}

