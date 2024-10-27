#include<iostream>
using namespace std;
class shape{
    public:

    shape(){
        cout<<"shape constructor"<<endl;
    }
    virtual void parameter()=0;
    virtual int area()=0;
    virtual int volume()=0;
    virtual void display()=0;
};
class shape2D:public shape{
    public:
    void display(){
        cout<<"shape2D"<<endl;
        }
    virtual void parameter()=0;
    virtual int area()=0;
    virtual void display()=0;
};
class shape3D:public shape{
    public:
    void display(){
        cout<<"shape3D"<<endl;
    }
    virtual void parameter()=0;
    virtual int volume()=0;
    virtual void display()=0;
};
class circle:public shape2D{
    int radius;
    public:
    circle(int r) : radius(r) {} // Constructor to initialize radius

    void parameter(){
        cout << "Radius: " << radius << endl;
    }
    int area(){
        return 3.14 * radius * radius;
    }
    void display(){
        cout << "Circle Area: " << area() << endl;
    }
};
class ellipse:public shape2D{
    int a,b;
    public:
    ellipse(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<"ellipse"<<endl;
    }
    void parameter(){
        cout<<a<<endl<<b<<endl;
    }
    int area(){
        return 3.14*a*b;
    }
    void display(){
        cout<<area()<<endl;
    }
};
class triangle:public shape2D{
    int a,b,c;
    public:
    triangle(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display(){
        cout<<"triangle"<<endl;
    }
    void parameter(){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
    int area(){
        return a*b*c;
    }
    void display(){
        cout<<area()<<endl;
    }
};
class sphere:public shape3D{
    int radius;
    public:
    sphere(int r){
        radius=r;
    }
    void display(){
        cout<<"sphere"<<endl;
    }
    void parameter(){
        cout<<radius<<endl;
    }
    int area(){
        return 4*3.14*radius*radius;
    }
    int volume(){
        return 4/3*3.14*radius*radius*radius;
        }
    void display(){
        cout<<area()<<endl<<volume()<<endl;
    }
};
class cube:public shape3D{
    int a;
    public:
    cube(int a){
        this->a=a;
    }
    void display(){
        cout<<"cube"<<endl;
    }
    void parameter(){
        cout<<a<<endl;
    }
    int area(){
        return 6*a*a;
    }
    int volume(){
        return a*a*a;
    }
    void display(){
        cout<<area()<<endl<<volume()<<endl;
    }
};
int main(){
    shape *s;
    s = new circle(5); // Pass a radius value
    s->display();
    return 0;
}
