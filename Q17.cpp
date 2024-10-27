#include<iostream>
#include<cmath>
using namespace std;
class rectangle{
     float a,b;
   public:
   rectangle(){
    a=0;
    b=0;
   }
    
   float set_a(float a){
    this->a=a;
    
   }
   float set_b(float b){
    this->b=b;
   }
   
   double area(){
    double ans=this->a*this->b;
    return ans;
   }
};
int main(){
    rectangle arrOfrectangle[4];
    cout<<"enter sides of rectangle accordingly"<<endl;
    for(int i=0;i<4;i++){
        int a,b;
        cout<<"enter side of "<<i+1<<" rectangle";
cin>>a>>b;
arrOfrectangle[i].set_a(a);
arrOfrectangle[i].set_b(b);
    }
    for(int i=0;i<4;i++){
        double ans=arrOfrectangle[i].area();
        cout<<"area of "<<i+1<<" th rectangle is :";
        cout<<ans<<endl;
    }


    return 0;
}