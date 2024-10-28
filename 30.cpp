#include<iostream>
using namespace std;
class a{
        public:
        a(){}
        void display1(){
        cout<<"class a prop"<<endl;
        }
};
class b{
        public:
        b(){}
        void display2(){
        cout<<"class b prop"<<endl;
        }


};
class c{
        public:
        c(){}
        void displa3(){
        cout<<"class c prop"<<endl;
        }

};
class d:public a, public b{
        public:
        d(){}
        void displa4(){
        cout<<"class d prop"<<endl;
        }


};
class e:public b,public c{
        public:
        e(){}
        void display5(){
        cout<<"class e prop"<<endl;
        }

};
class f:public d,public e{
        public:
        f(){}
        void display6(){
        cout<<"class f prop"<<endl;
        }

};
int main(){
        f ob1;
        ob1.display1();
        ob1.display2();
        ob1.display3();
        ob1.display4();
        ob1.display5();
        ob1.display6();
         return 0;
}
