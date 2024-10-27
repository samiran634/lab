#include<iostream>
using namespace std;
    class complexNum{
        float real,complex;
        
        public:
        complexNum(){
            real=0;
            complex=0;
        }
        float get_real(complexNum a){
            return a.real;
        }
        float get_complex(complexNum a){
            return a.complex;
        }
        void set_real(float a){
            this->real=a;
        }
        
        void set_complex(float a){
            this->complex=a;
        }
        void display ()const{
            cout<<"real part of complex number is : "<<this->real<<" real part of complex number is : " <<this->complex<<endl;
        }
        friend complexNum sum(complexNum &a,complexNum &b){
            complexNum temp;
            temp.real=a.get_real(a)+a.get_real(b);
            temp.complex=a.get_complex(a)+a.get_complex(b);
            return temp;
        }
        friend void display(complexNum &a ){
            cout<<"complex number is: \n";
            cout<<a.get_real(a)<<"+j"<<a.get_complex(a)<<endl;
        }


 

    };
int main(){
        float r1,r2,c1,c2;
        cout<<"enter first complex number : "<<endl;
        cin>>r1>>c1;
        cout<<"enter second complex number : "<<endl;
         cin>>r2>>c2;
complexNum complex1,complex2;
complex1.set_real(r1);
complex1.set_complex(c1);
complex2.set_real(r2);
complex2.set_complex(c2);
    complexNum complex3=sum(complex1,complex2);
    display(complex1);
    display(complex2);
    cout<<"adding two complex numbers results in : "<<endl;
    display(complex3);


    return 0;
}