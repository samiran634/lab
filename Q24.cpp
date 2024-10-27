#include<iostream>
using namespace std;
 class Stack { 
    int *buffer, top=-1; 
    int size;
    public : 
        Stack (int size){
        this->size=size;
            buffer=new int[size];
        }
void push(int x){
          if (top == size - 1) {
            cout << "Stack is full. Cannot push " << x << endl;
            return;
        }

    buffer[++top]=x;
}
    int pop(){
       if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1; // or throw an exception
        }
        return buffer[top--];

    }  
    void disp(){
        if (top == -1) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << buffer[i] << " ";
        }
        cout << endl;


    } 
}; 
int main(){
  
Stack s1(10);
s1.push(2);
s1.push(3);
s1.push(4);
s1.push(5);
s1.pop();
s1.disp();
 
    return 0;
}