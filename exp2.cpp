#include<bits/stdc++.h>
using namespace std;
class Complex{
    public:
    int real;  //to store real part of the complex number
    int imaginary;  //to store imaginary part of complex number

    Complex()
    {
        //initial values are zero
        real =0;
        imaginary =0;
    }
    Complex(int r,int i)
    {
        real =r; //r is intialized during object creation
        imaginary = i;  // i is initialized during object creation
    }
    Complex addComplexNumber(Complex C1,Complex C2)
    {
       Complex res;  //result object of complex class 
       //adding real part of complex number

       res.real = C1.real+C2.real;
       //adding imaginary part of complex numbers

       res.imaginary = C1.imaginary+C2.imaginary;
       //returning the sum
       return res;
    }
};

//main Class

int main()
{
    cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    cout<<"batch: S1"<<endl;
    //first Complex number
    Complex C1(4,5);
    //printing first complex number

    cout<<"Complex number 1:"<<C1.real<<"+i"<<C1.imaginary<<endl;
    //second Complex number
    Complex C2(8,9);
    //printing second complex number

    cout<<"Complex number 2:"<<C2.imaginary<<"+i"<<C2.imaginary<<endl;

    //for Storing the sum

    Complex C3;
    //calling addComplexNumber()method

    C3 = C3.addComplexNumber(C1,C2);
    //printing the sum
    cout<<"sum of the complex number:"<<C3.real<<"+i" <<C3.imaginary;
    cout<<endl<<endl;

    //Test for second input 
    //first Complex number

    Complex A(2,7);
    //printing first Complex number
    cout<<"complex number 1:"<<A.real<<"+i"<<A.imaginary<<endl;
    // second complex numder
    Complex B(10,6);
    //printing second complex number
    cout<<"Complex number 2:"<<B.real<<"+i"<<B.imaginary<<endl;

    //for storing the sum 
     
    Complex C;
    //calling addComplexNumber()method
    C = C.addComplexNumber(A,B);
    //printing the sum

    cout<<"sum of the complex number:"<<C.real<<"+i"<<C.imaginary;

}