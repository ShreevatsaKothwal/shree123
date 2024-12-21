#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

void displayLinkedList(struct node*ptr){
	struct node *p = ptr;
	
	do{
	    printf("Element is :%d\n",p->data);
	    p=p->next;
	}while(p!=ptr);
	
}

struct node* deletionAtFirst(struct node* ptr){
    struct node* p= ptr;
    struct node* q= ptr->next;
    struct node* r= ptr->next->next;

    while(r->next!=ptr){
        r=r->next;
    }
    free(p);
    r->next=q;
   
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
    
}
   
void deletionAtEnd(struct node* ptr){               
    struct node* p = ptr;
    struct node* q= ptr->next; 
    
    while(q->next!=ptr){
        p=p->next;
        q=q->next;
    }
    p->next=ptr;
    free(q);
        
}            


struct node *create_list(){
    int i,n;
    struct node *p,*head;

    printf("How many nodes:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if (i==0){
            head = (struct node *)malloc (sizeof(struct node));
            p=head;
        }
        else{
            p->next=(struct node *)malloc (sizeof(struct node));
            p=p->next;
        }
        printf("Enter data:\n");
        scanf("%d",&p->data);
    }

    p->next=head;
    return head;
}

int main(){
	struct node *head=create_list();
    
	displayLinkedList(head);
	
    int a,b,c;
    printf("Enter 1 for deletionAtFirst\n");
    printf("Enter 2 for deletionAtIndex\n");
    printf("Enter 3 for deletionAtEnd\n");
    
    scanf("%d",&a);

    switch (a){
        case 1:
            
            head=deletionAtFirst(head);
            break;

        case 2:
            
            printf("Enter value at index:");
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
   displayLinkedList(head);
    
return 0;
}




