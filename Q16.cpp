#include<iostream>
#include<cmath>
using namespace std;
class dist{
int x,y,z;
    public:
    dist (){
        
this->x=0;
this->y=0;
this->z=0;        
    }
dist (int a,int b,int c){
    x=a;
    y=b;
    z=c;
}
    double distance(dist &a,dist &b){
    double ans=sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2)+pow((a.z-b.z),2));
return ans;
    }
    void display()const{
        cout<<"co-ordinates are:\n"<<"x="<<this->x<<"\t"<<"y="<<this->y<<"\t" <<"z="<<this->z<<endl;
    }
};
int main(){
    dist a(2,3,4),b(1,2,3);
    dist c(0,0,0);
    double ans=c.distance(a,b);
    cout<<ans<<endl;
    a.display();
    b.display();
    c.display();
}