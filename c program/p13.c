#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
}; 

void displayList(struct node* ptr){ 
    struct node* p=ptr;
    while(p!=NULL){
        
        printf("Element is %d\n",p->data);
        p=p->next;
    }
}
struct node* dllcreate(){

    struct node* head =NULL;
    struct node* tail =NULL;
    
    int n,a;
    
    printf("How many nodes for creation:");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++){
    
        struct node* p=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:\n");
        scanf("%d",&a);
        p->data=a;
        p->next=NULL;
        p->prev=NULL;
        
        if(head==NULL){
            head=p;
            tail=p;
        }
        else{
            tail->next=p;
            p->prev=tail;
            tail=p;
        }
                
     }
     return head;   
}  

struct node* insertionAtFirst(struct node* ptr,int data){
    struct node* p=(struct node*) malloc (sizeof(struct node));
    
    p->data=data;
    p->next=ptr;
    p->prev=NULL;
    
    return p;
}

void insertionAtIndex(struct node* ptr,int data,int index){
    struct node* p=ptr;
    
    struct node* newNode = (struct node*) malloc (sizeof(struct node));
    newNode->data=data;
    
    for(int i=0;i<index-1;i++){
         p=p->next;
    }
    newNode->next=p->next;
    p->next=newNode;
    newNode->prev=p;
    
}

void insertionAtEnd(struct node* ptr,int data){               
    struct node* p=ptr;
    
    struct node* newNode=(struct node*) malloc (sizeof(struct node));
    newNode->data=data;
    //newNode->prev = NULL;
    
    
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = newNode;
    newNode->next=NULL;
    newNode->prev=p;
    
}            

int main(){
    struct node* head=dllcreate();
    printf("Before insertion\n");
    displayList(head);
    
    int a,b,c;
    printf("Enter 1 for insertionAtFirst\n");
    printf("Enter 2 for insertionAtIndex\n");
    printf("Enter 3 for insertionAtEnd\n");
    
    scanf("%d",&a);
    
    switch(a){
        case 1:
            printf("Enter value to insert:\n");
            scanf("%d",&b);
            head=insertionAtFirst(head,b);
            break;
        case 2:
            printf("Enter value to insert:\n");
            scanf("%d",&b);
            printf("Enter index:\n");
            scanf("%d",&c);
            insertionAtIndex(head,b,c);
            break;
        case 3:
            printf("Enter value to insert:\n");
            scanf("%d",&b);
            insertionAtEnd(head,b);
            break;
        default:
            printf("No case is matched");
            break;
            
    }
    printf("After insertion\n");
    displayList(head);
    
      
return 0;
}


