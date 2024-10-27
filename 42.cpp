#include<iostream>
using namespace std;
class Table{
 
    int r,c;
    public:
    Table(int r,int c){
        this->r=r;
        this->c=c;
    }
    operator int(){
        return r*c;
    }
    Table& operator=(Table& t){
        this->r=t.r;
        this->c=t.c;
        return *this;
    }
    Table& operator=(int x){
        this->r=x;
        this->c=x;
        return *this;
    }
    friend istream& operator>>(istream& in,Table& t){
        for(int i=0;i<t.r;i++){
            for(int j=0;j<t.c;j++){
                in>>t(i,j);
            }
        }
        return in;
    }
    void display(){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<(i,j)<<" ";
            }
        }
        cout<<endl;
    }
    int& operator()(int i, int j) {
    }
};

int main(){
  Table t(4,5),t1(2,3);
  cin>>t;
  t(0, 0) = 5;
  int x = t(2, 3);
  t1 = t;
  cout<<t<<endl<<t1;
    return 0;
}
