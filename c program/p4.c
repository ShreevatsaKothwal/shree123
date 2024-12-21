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

void swap(struct node* ptr){
    struct node* p=ptr;
    struct node* q=ptr;

    while(q->next!=NULL){
        q=q->next;
    }
    int temp=0;

    temp=q->data;
    q->data=p->data;
    p->data=temp;

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

int main(){
	struct node *head=create_list();
    printf("Before Swapping\n");
    displayLinkedList(head);
    swap(head);

    printf("After Swapping\n");
    displayLinkedList(head);
    
return 0;
}




