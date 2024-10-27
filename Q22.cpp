#include<iostream>
using namespace std;

/*22. Write some programs to understand the notion of constant member functions, mutable data members 
etc.*/

class Learning{
    private:
     mutable int x;
     const int y;
    public:
     int z;

    Learning(int a):y(a-1){
        x=a;
        z=2*a;
        //y=x;// can't perform since y is declared constant.
    } 

    Learning show() const{
        //z=5; //Updation of non-mutable member variables by constant member function is not possible only printing is possible.
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
        return *this;
    }
  
    void incr() const{
        x++; // Mutable member variables can be updated by constant member function.
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
        //z++; // Normal member variables cannot be updated by a constant member function. 
        //y++; // Constant member variables cannot be updated by a constant member function.
    }

    Learning* set(int x,int z,int y){
        this->x=x;
        cout<<"x="<<x<<endl;
        this->z=z;
        cout<<"z="<<z<<endl;
        //this->y=y; Constant member variables cannot be updated by this method.
        return this;
    }
};
int main(){
    Learning ob1(3);
    ob1.show();
    ob1.incr();
    ob1.set(3,4,7);
    cout<<"\n";
    // ob.show().incr() i.e, calling in a cascated fashion is not allowed.
    Learning ob2(7);
    ob2.show().incr(); // calling in a cascated fashion is allowed  only if return type is adjusted.In this case it's object.
    cout<<"\n";

    Learning ob3(5);
    ob3.set(0,3,2)->incr(); //calling in a cascated fashion is allowed after adjusting return type.In this case it's object pointer.

    


}