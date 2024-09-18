#include <stdio.h>
#include <stdlib.h>
struct Node{
    int val;
    struct Node* next;
};
struct stack{
    int val;
    struct Node* top;
}stack;

void push(int x){
    struct Node* newTop = (struct Node*)malloc(sizeof(struct Node));
    newTop->val = x;
    if(stack.top == NULL) {
        stack.top = newTop;
        newTop->next = NULL;
    }
    else{
        newTop->next = stack.top;
        stack.top = newTop;
    }
}

int top(){
    return stack.top->val;
}

int pop(){
    int val = -1;
    if(stack.top == NULL)
        return -1;
    else{
        val = stack.top->val;
        stack.top = stack.top->next;
    }
    return val;
}

int evaluate(char* s,int n){
    for(int i = 0;i < n;i++){
        if(s[i] >= '0' && s[i] <= '9'){
            push(s[i]-'0');
        }
        else{
            int v1 = pop();
            int v2 = pop();
            switch(s[i]){
                case '+':
                    push(v1+v2);
                break;
                case '-':
                    push(v2-v1);
                    break;
                case '*':
                    push(v1*v2);
                break;
                case '/':
                    push(v2/v1);
                break;
            }
        }
    }
    return pop();
}

int main(){
    char* s = "231*+9-";
    printf("%d", evaluate(s,7));
}