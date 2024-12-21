#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};


void displayLinkedList(struct node*ptr){
	struct node *p = ptr;
	
	while(p!=NULL){
	printf("Element is :%d\n",p->data);
	p=p->next;
	}
	
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

    p->next=NULL;
    return head;
}

struct node* push (struct node* ptr,int data){
    struct node* newNode = (struct node *)malloc (sizeof(struct node));
    newNode->data = data;

    newNode->next = ptr;
    return newNode;
}

struct node* pop (struct node* ptr){
    struct node* p = ptr;
    struct node* q = ptr->next;

    printf("Popped element is %d\n",p->data);

    free(p);
    return q;

}


int main(){
	struct node *head=create_list();
    
    printf("Before operation\n");
    displayLinkedList(head);


    int a,b,c;
     
    printf("Enter 1 for push:\n");
    printf("Enter 2 for pop:\n");
    
    scanf("%d",&a);

    switch (a){
    case 1:
        printf("Enter data:\n");
        scanf("%d",&b);
        head = push (head,b);
        break;
    case 2:
        head = pop (head);
        break;
    default:
        printf("Enter valid input");
        break;
    }

    printf("After operation\n");
    displayLinkedList(head);



return 0;
}

