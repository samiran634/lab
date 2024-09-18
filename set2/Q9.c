 #include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
struct stack{
    int val;
    struct Node* top;
}s1,s2;

void push(int x, struct stack* stack){
    struct Node* newTop = (struct Node*)malloc(sizeof(struct Node));
    newTop->val = x;
    if(stack->top == NULL) {
        stack->top = newTop;
        newTop->next = NULL;
    }
    else{
        newTop->next = stack->top;
        stack->top = newTop;
    }
}

int top(struct stack stack){
    if(stack.top == NULL) printf("Empty Stack");
    return stack.top->val;
}

int pop(struct stack* stack){
    int val = -1;
    if(stack->top == NULL)
        return -1;
    else{
        val = stack->top->val;
        stack->top = stack->top->next;
    }
    return val;
}

int isEmpty(struct stack st){
    return (st.top == NULL);
}

void enqueue(int x){
    while(isEmpty(s2) == 0){
        push(top(s2), &s1);
        pop(&s2);
    }
    push(x,&s1);
    printf("%d\n", top(s1));
    while(isEmpty(s1) == 0){
        push(top(s1), &s2);
        pop(&s1);
    }
}

int dequeue(){
    int ele = top(s2);
    pop(&s2);
    return ele;
}
int peek() {
    return top(s2);
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dequeue();
    printf("front : %d" , top(s2));
}