#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    int height; 
    public:
    person(string name,int age,int height){
        this->name=name;
        this->age=age;
        this->height=height;
    }
    virtual void display(){
        cout<<name<<endl<<age<<endl<<height<<endl;
    }
};
class student:public person{
    int roll;
    public:
    student(string name,int age,int height,int roll):person(name,age,height){
        this->roll=roll;
    }
    void display(){
        person::display();
        cout<<roll<<endl;
    }
};
int main(){
    person *p;
    for(int i=0;i<4;i++ ){
        if (i < 2) {
            p = new student("Student" + to_string(i+1), 20+i, 170+i, 1001+i);
        } else {
            p = new person("Person" + to_string(i-1), 30+i, 180+i);
        }
        p->display();
        delete p;  
    }
    return 0;
}