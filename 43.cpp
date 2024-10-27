#include<iostream>
using namespace std;
class Integer{
    int i;
    public:
    Integer(){
        i=0;
    }
    Integer(int i){
        this->i=i;
    }
    operator int(){
        return i;
    }
};
class index{
   int i;
   public:
   index(int i){
    this->i=i;
   }
   operator int(){
    return i;
   }
   index operator+(index& in){
    return index(i+in.i);
   }
   void operator=(int i){
    this->i=i;
   }
   operator Integer(){
    return Integer(i);
   }
};
 
int main(){
    index in(4),out(10);
    int x=in;
    
    int y=in+out;
    in=2;
    Integer i;
    i=in;
    cout<<x<<endl<<y<<endl<<i;
    return 0;
}