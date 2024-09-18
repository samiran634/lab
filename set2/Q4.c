
#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Define the structure for a stack
typedef struct Stack {
    Node* top;
} Stack;
Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtEnd(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void initStack(Stack* stack) {
    stack->top = NULL;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Function to push an element onto the stack
void push(Stack* stack, int data) {
    Node* newNode = createNode(data);
    if (isEmpty(stack)) {
        stack->top = newNode;
    } else {
        newNode->next = stack->top;
        stack->top = newNode;
    }
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    int data = stack->top->data;
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

// Function to get the top element of the stack
int top(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->top->data;
}

int main() {
    Stack stack;
    initStack(&stack);

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter stack element %d: ", i + 1);
        int p;
        scanf("%d", &p);
        push(&stack, p); // Use push instead of insertAtEnd
    }
 
    printf("enter 0 to cheak if stack is empty of not \n");
    printf("enter 1 for a element to push in stack \n");
    printf("enter 2 to pop element from stack \n");
    printf("enter 3 to get the top element of stack \n");
    printf("enter any other key to exit.\n");
  
 
    while(1){
        int p;
        scanf("%d",&p);
        if(p==0){
           int flag=isEmpty(&stack);
            if(flag==1)printf("stack is empty");
            else printf("stack is not empty");
        }
        else if(p==1){
            int data;
            printf("enter data that you want to be inserted:");
            scanf("%d",&data);
            push(&stack,data);
        }
        else if(p==2){
            pop(&stack);
        }
        else if(p==3){
            int t=top(&stack);
            printf("%d",t);
        }
        else break;
    }

    return 0;
}
