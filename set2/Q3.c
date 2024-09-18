#include<stdio.h>
#include<stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;
Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    // Initially assigning the next and prev pointers to NULL
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}
void insertAtBeginning(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        newNode->next = *head;
        (*head)->prev=newNode;
        *head = newNode;
    }
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
        newNode->prev=temp;
    }
}
void printListReverse(Node** head) {
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}
// Function to free the doubly linked list
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main(){
    Node*head;
     int n;
    printf("Enter number of elements you wnat to input \n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int p;
         scanf("%d",&p);
         insertAtEnd(&head,p);
         
      
    }


  printf("Doubly Linked List: ");
    Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    printf("After reversing the Linked list:\n");
    printListReverse(&head);
    return 0;
}