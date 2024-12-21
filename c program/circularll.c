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

struct node * insertionAtFirst(struct node *ptr, int data){
    struct node * p = (struct node *) malloc(sizeof(struct node));
    p->data = data;

    struct node* q = ptr;
    while (q->next != ptr) { 
        q = q->next;
    }

    p->next = ptr;
    q->next = p;
    return p; 
}

void insertionAtIndex(struct node*ptr,int data,int index){
	struct node *p = ptr;
	
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	
	for(int i=0;i<index-1;i++){
		p=p->next;
	}		
	newNode->next=p->next;
	p->next=newNode;
	
}	

void insertionAtEnd(struct node*ptr,int data){
	struct node *p = ptr;
	
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	 
	while(p->next!=ptr){
		p=p->next;
	}
	p->next=newNode;
	newNode->next=ptr;

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
    printf("Enter 1 for insertionAtFirst\n");
    printf("Enter 2 for insertionAtIndex\n");
    printf("Enter 3 for insertionAtEnd\n");
    
    scanf("%d",&a);

    switch (a){
        case 1:
            printf("Enter value to insert:");
            scanf("%d",&b);
            head=insertionAtFirst(head,b);
            break;

        case 2:
            printf("Enter value to insert:");
            scanf("%d",&b);
            printf("Enter value at index:");
            scanf("%d",&c);
            insertionAtIndex(head,b,c);
            break;
        case 3:
            printf("Enter value to insert:");
            scanf("%d",&b);
            insertionAtEnd(head,b);
            break;
        default:
             printf("No case is matched");
            break;
    }
   displayLinkedList(head);
    
return 0;
}




