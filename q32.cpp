#include<iostream>
using namespace std;
class employee{
    string name;
    int salary;
    public:
    employee(string name,int salary){
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<name<<endl<<salary<<endl;
    }
};
class manager:public employee{
 
    string type,allouence;
    public:
    manager(string name,int salary ,string type,string allouence):employee(name,salary){
 
        this->type=type;
        this->allouence=allouence;
    }
    void display(){
        employee::display();
        cout <<endl<<type<<endl<<allouence<<endl;
    }
};
class clerk:public employee{
    string type,allouence;
    public:
    clerk(string name,int salary,string type,string allouence):employee(name,salary){
      
        this->type=type;
        this->allouence=allouence;
    }
    void display(){
        employee::display();
        cout<<endl<<type<<endl<<allouence<<endl;
    }
};
int main(){
    manager m("John",10000,"manager","allouence1");
    clerk c("Jane",5000,"clerk","allouence2");
    m.display();
    c.display();
    return 0;
}