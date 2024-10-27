#include<iostream>
using namespace std;
class ArrIndex{
    int i;
    public:
    ArrIndex(int i){
        this->i=i;
    }
    int& operator[](int i){
        return this->i;
    }
    operator int(){
        return i;
    }
    friend ostream& operator<<(ostream& out,ArrIndex& a){
        out<<a.i;
        return out;
    }

};
int main(){
    ArrIndex a(10);
    for(int i=0;i<10;i++){
        a[i]=i;
        cout<<a<<endl;
    }
    return 0;
}