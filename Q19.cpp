#include<iostream>
using namespace std;
class vector{
    int n;
int * arr=new int[1];
    public:
      vector()
   {
       this->n = 0;
   }
   vector(int x)
   {
       this->n = x;
   }
    vector(int arr[],int n){            //copy constructor
        for(int i=0;i<n;i++){
            this->arr[i]=arr[i];
        }
    }
       void addition(vector a, vector b)
   {
       cout << "Summation Value is : ";
       for(int i = 0; i < a.n; i++)
       {
           cout << a.arr[i]+b.arr[i] << " ";
       }
       cout << "\n";
   }

   void subtraction(vector a, vector b)
   {
       cout << "Subtracted Value is : ";
       for(int i = 0; i < a.n; i++)
       {
           cout << a.arr[i]-b.arr[i] << " ";
       }
       cout << "\n";
   }
   void compare(vector a, vector b)
   { 
       for(int i = 0; i < a.n; i++)
       { 
           if(a.arr[i]<b.arr[i])
            cout<<"second vector element is greater than first vector element"<<endl;
          else if(a.arr[i]>b.arr[i])
           cout<<"first vector element is greater than second vector element"<<endl;

              else  cout <<"both vector have equal element"<<endl;
    
       }
       
    
      
   }
      void getData()
   {
       cout << "Enter the elements : ";
       for(int i = 0; i < n; i++)
       {
           int x;
           cin >> x;
            arr[i]=x;
       }
       
   }


};
int main(){
int n;
cout<<"enter size of array :";
cin>>n;
vector v1(n);
v1.getData();
vector v2(n);
v2.getData();
v1.addition(v1,v2);
v1.subtraction(v1,v2);
 v1.compare(v1,v2);
 
 
    return 0;
}