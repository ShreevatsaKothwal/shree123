#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
}; 

void displayList(struct node* ptr){ 
    
    while(ptr!=NULL){
        
        printf("Element is %d\n",ptr->data);
        ptr=ptr->next;
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

struct node* deletionAtFirst(struct node* ptr){
   struct node* p= ptr;
   struct node* q= ptr->next;
   
   
   free(p);
   q->prev =NULL;
   
   return q;
  
}

void deletionAtIndex(struct node* ptr,int index){
   
    struct node* p = ptr;
    struct node* q= ptr->next;   
    struct node* r = ptr->next->next;
    
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
        r=r->next;

    }
    
    
    p->next = q->next;
    r->prev=p;
    
}
   
void deletionAtEnd(struct node* ptr){               
    struct node* p = ptr;
    struct node* q= ptr->next; 
    
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
        
}            

int main(){
    struct node* head=dllcreate();
    printf("Before deletion\n");
    displayList(head);
    
   
    int a,b,c;
    printf("Enter 1 for deletionAtFirst\n");
    printf("Enter 2 for deletionAtIndex\n");
    printf("Enter 3 for deletionAtEnd\n");
    
    scanf("%d",&a);
    
    switch(a){
        case 1:
            head=deletionAtFirst(head);
            break;
        case 2:
            printf("Enter index:\n");
            scanf("%d",&c);
            deletionAtIndex(head,c);
            break;
        case 3:
            deletionAtEnd(head);
            break;
        default:
            printf("No case is matched");
            break;
            
    }
    printf("After deletion\n");
    displayList(head);
         
return 0;
}