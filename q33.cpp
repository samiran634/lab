#include<iostream>
using namespace std;
class Shape2D{
   
    public:
    Shape2D( ){
     
    }
    virtual void parameter()=0;
   virtual int area()=0;
   virtual void display()=0;
};
class Rectangle:public Shape2D{
        int length,breadth;
    public:

        Rectangle(int length,int breadth):Shape2D( ){
        this->length=length;
        this->breadth=breadth;
    }
    void parameter(){
        cout<<length<<endl<<breadth<<endl;
    }
    int area(){
        return length*breadth;
    }
    void display(){
        cout<<area()<<endl;
    }
};
class circle:public Shape2D{
    int radius;
    public:
    circle(int radius):Shape2D( ){
        this->radius=radius;
    }
    void parameter(){
        cout<<radius<<endl;
    }
    int area(){
        return 3.14*radius*radius;
    }
    void display(){
        cout<<area()<<endl;
    }
};
int main(){
    Rectangle r(10,20);
    circle c(10);
    Shape2D *s;
    s=&r;
    s->display();
    s=&c;
    s->display();
    return 0;
}