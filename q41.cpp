#include <iostream>
using namespace std;
class Integer{
    int i;
    public:
    Integer(){
        i=0;
    }
    Integer (int val){
        i=val;
    }
   Integer& operator=(const Integer& I){
    this->i=I.i;
    return *this;
   };
   Integer operator++(int){
    Integer temp=*this;
    ++i;
    return temp;

   }
   Integer& operator<<(Integer& I){
    cout<<I.i;
    return *this;
   }
   Integer operator+(Integer& I){
       return  this->i+I.i;
   }
   operator int() const {
        return i;
    }
};
int main(){
    Integer a=4, b=a,c;
    c=a+b++;
    int i=a;
    cout<<a<<b<<c;

    return 0;
}
