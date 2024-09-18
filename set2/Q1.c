#include <stdio.h>
#include<stdlib.h>
 typedef struct node
{
    /* data */
    int data;
    struct node* next;
}node;
node* createnode(int data ){
     node* head=(struct node*)malloc(sizeof(struct node) );
   
head->data=data;
head->next=NULL;

    return head;
}
void insertAtLastnode(int data,node**head){
    node*tvr=*head;
    node *newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=&newnode;
    }
    while(tvr->next){
        tvr=tvr->next;
    }
    tvr->next=newnode;
}
void insetAtAnyNode(int pos,int data,node**head){
    int size=0;
    node*tvr=*head;
    
    while(tvr){
        tvr=tvr->next;
        size++;
    }
    if(pos==0){
         node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = *head;

        head=&newnode;
    }
    if(pos>=size){
        printf("inserting at the end node\t");
        insertAtLastnode(data,head);
    }
    else{
        node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        node*temp=*head;
        while(pos>2){
            temp=temp->next;
            pos--;
        }
           newnode->next=temp->next;
        temp->next=newnode;
     

    }
}

void deleteNode(int pos, node** head) {
    if (head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    if (pos == 1) {
        node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    node* tvr = *head;
    while (pos > 2 && tvr->next != NULL) {
        tvr = tvr->next;
        pos--;
    }

    if (tvr->next == NULL) {
        printf("Position exceeds list length.\n");
        return;
    }

    node* ptr = tvr->next;
    tvr->next = ptr->next;
    free(ptr);
}
void count_node(node*head){
    int cnt=0;
    while(head){
            head=head->next;
            cnt++;
    }
    printf("no of node in the linked list is :%d",cnt);
       printf("\n");
}

void display_list(node *head){
    while(head){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
void display_reverse(node *head){
    node*cur=head,*prev=NULL,*next=NULL;
    while(cur!=NULL){
      
        next=cur->next;
          cur->next=prev;
        prev=cur;
        cur=next;
    }
    node*temp=prev;
    while(temp){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
 

int main(){
        int n;
    printf("enter no of nodes you want to create:\n");
    scanf("%d",&n);
   node* head ;
int f=0;
    while(n){
        int p;
        scanf("%d",&p);
        if(f==0){
            head=createnode(p);
            f=1;
        }
        else
        insertAtLastnode(p,&head);
        n--;
    }
    
    insetAtAnyNode(1,5,&head);
    insetAtAnyNode(4,16,&head);
    display_list(head);
    deleteNode(2,&head);
    display_list(head);
    count_node(head);
    display_reverse(head);
   
   
   
    return 0;
}