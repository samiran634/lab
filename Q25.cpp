#include<iostream>
using namespace std;
    class Queue { 
int *data; 
int front=0, rear=0; 
int size;
public : 
Queue(int size){
    this->size=size;
    data=new int [size];
    

} //create queue with specified size 
void add(int x){
    if(rear>size){
        cout<<"Queue is full : ";
        return;
    }
    data[++rear]=x;

} //add specified element to the queue 
int remove(){
    if(front>rear){
        cout<<"Queue is empty. Can't remove element.";
        return -1;
    }
    ++front;
    }//delete element from the queue 
void disp(){
        if (front>rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front+1; i <= rear; i++) {
            cout << data[i] << " ";
        }
        cout << endl;

}
//displays all elements in the queue(front to rear order) 
};
int main(){
Queue q(10);
q.add(2);
q.add(3);
q.add(4);
q.add(5);
   q.remove();
   q.remove();
    q.disp();

    return 0;
}