#include<iostream>
#include<cmath>
using namespace std;
class wireLessDev{
   mutable int location[3] , device_id,transmitionRange;
    public:
    wireLessDev(){
         location[3]=(0,0,0);
         device_id=0;
         transmitionRange=0;

    }
   void set_location(int arr[]){
for(int i=0;i<3;i++){
    this->location[i]=arr[i];
}
    }
    void set_id(int x){
this->device_id=x;
    }
    void set_range(int x){
this->transmitionRange=x;
    }
    int get_id(){
        return this->device_id;
    }
   double Neighbour(wireLessDev a, wireLessDev b)
   {
       double dist=sqrt(pow((a.location[0]-b.location[0]),2)+pow((a.location[1]-b.location[1]),2)+pow((a.location[2]-b.location[2]),2));
       return dist;
   }

};

int main(){
wireLessDev arrOfWirelessDev[10];
for(int i=0;i<10;i++){
    int arr[3];
    cout<<"Enter location of "<<i+1<<" th device"<<endl;
    for(int j=0;j<3;j++){
        int p;
        if(j==0)
        cout<<"enter x co-ordinate :";
        if(j==2)
        cout<<"enter z co-ordinate :";
        if(j==1)
        cout<<"enter y co-ordinate :";
        cin>>p;
        arr[j]=p;
    }
int id,range;
cout<<"enter id of "<<i+1<<" device :";
cin>>id;
cout<<"enter transmition range of "<<i+1<<" th device :";
cin>>range;
arrOfWirelessDev[i].set_location(arr);
arrOfWirelessDev[i].set_id(id);
arrOfWirelessDev[i].set_range(range);
}
wireLessDev test;
    for(int i=0;i<10;i++){
        int distanceArr[9];
        for(int j=0;j<10;j++){
            if(i!=j)
 distanceArr[j]=test.Neighbour(arrOfWirelessDev[i],arrOfWirelessDev[j]);
        }
        cout<<"neghbour device of "<<arrOfWirelessDev[i].get_id()<<" is"<<endl;
        for(int j=0;j<10;j++){
            if(i!=j){
                if(distanceArr[j]<=arrOfWirelessDev[j].get_id()){
                        cout<<arrOfWirelessDev[j].get_id()<<endl;
                }
            }
        }

    }
    return 0;
}