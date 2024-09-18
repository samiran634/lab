#include<iostream>
using namespace std;
class IntArray{
 
          int n;
    int *arr;
public:
    IntArray(int c = 0){
        n = c;
        arr = new int[n];
    }

    void setArr(){
        cout << "Enter array elements: ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    }

    void display_reverseArr(){
        cout<<"reversed array is"<<endl;
        for(int i = n - 1; i >= 0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sort(){
        bool swapped;
        for (int i = 0; i < n - 1; i++) {
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (swapped == false)
                break;
        }
    }

    void mergeArr(IntArray &a, IntArray &b){
        int *mergedArr = new int[a.n + b.n];
        int j = 0;
        int f=0;
        for(int i = 0; i < a.n + b.n; i++){
            if(i < a.n)
                mergedArr[i] = a.arr[j];
            else
                mergedArr[i] = b.arr[j];
            j++;
            if(j >= a.n&&f==0){
                j = 0;
                f=1;
                }
        }
        cout << "Merged array is: ";
        for(int i = 0; i < a.n + b.n; i++){
            cout << mergedArr[i] << " ";
        }
        cout << endl;
        delete[] mergedArr;
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    
};
int main(){int n;
cout<<"enter no of array you want to give as input: ";
cin>>n;
       IntArray *arrofarrays = new IntArray[n];

    for(int i=0;i<n;i++){
        cout<<"enter size of array :";
        int p;
        cin>>p;
         arrofarrays[i] = IntArray(p);

        arrofarrays[i].setArr();
        arrofarrays[i].display_reverseArr();
        arrofarrays[i].sort();
        cout<<"array elements after sorting :"<<endl;
        arrofarrays[i].display();
    }
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(i!=j){
           cout<<"marging "<<i+1<<" th array with ";
                cout<<j+1<<" th array\t";
                arrofarrays[i].mergeArr(arrofarrays[i],arrofarrays[j]);
           }
        }
    }
   delete[] arrofarrays;

    return 0;
}