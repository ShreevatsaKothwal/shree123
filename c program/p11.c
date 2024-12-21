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

int n; // Global Initialization

void displayreverse(struct node* ptr){
    struct node *p= ptr;
    int arr[n],i=0;

    while(p!=NULL){
        arr[i]=p->data;
        p=p->next;
        i++;
    }
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }

}

struct node *create_list(){
    int i;
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

	displayLinkedList(head);
	
    displayreverse(head);
    
return 0;
}




