#include<iostream>
using namespace std;
 class Rectangle{
    private:
    double length;
    double width;

    public:
    //constructure with defult value 1 for both
    Rectangle() : length(1.0),width(1.0) {}
    Rectangle(double len,double wid) : length(len),width(wid) {}  //construct with custom value
    //deconstruct
    ~Rectangle(){
        std::cout <<"Rectangle object destroyed."<<std::endl; 
    }
    //getter method for length and width 
    double getLength() const{
        return length;
    }
    double getWidth() const{
        return width;
    }
    //setter method for length and width 
    void setLength(double len) {
        length = len;
    }
    void setWidth(double wid) {
        width = wid;
    }
    // calculate and return type the area of the rectangle 

    double calculateArea() const{
        return length*width;
    }
    //perimeter of the rectangle 
    double calculatePerimeter() const {
        return 2*(length+width);
    }

 };

 int main()
  {
     cout<<"Tejashree Arunkumar Samai"<<endl;
    cout<<"Rollno: 15"<<endl;
    cout<<"Div: B"<<endl;
    cout<<"batch: S1"<<endl;

    
 //create a rectangle with custom value 
 Rectangle rect(4.0,40.0); 
 // display properties

 std::cout<<"Rectangle properties:"<<std::endl;
 std::cout<<"Length:"<<rect.getLength()<<std::endl;
 std::cout<<"Width:"<<rect.getWidth()<<std::endl;
 std::cout<<"Area:"<<rect.calculateArea()<<std::endl;
 std::cout<<"Perimeter:"<<rect.calculatePerimeter()<<std::endl;

 return 0;
 }

