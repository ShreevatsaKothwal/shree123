#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

void displayLinkedList(struct node*ptr){
	struct node *p = ptr;
	
	do{
        printf("Element is %d\n",p->data);
        p=p->next;
    }while(p!=ptr);
	
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
	
return 0;
}




