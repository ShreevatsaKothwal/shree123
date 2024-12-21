#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;
};

void displayLinkedList(struct node*ptr){
	struct node *p = ptr;
	
	while(p->next!=NULL){
	printf("Element is :%d\n",p->data);
	p=p->next;
	}
	printf("Element is :%d\n",p->data);
}

void insertionAtFirst(struct node*ptr,int data){
	
	
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=data;
	
	newNode->next=ptr->next;
	ptr->next=newNode;
	
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
	 
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=newNode;
	newNode->next=NULL;

}
	

int main(){
	struct node *head,*second,*third,*forth;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	forth=(struct node*)malloc(sizeof(struct node));
	
	head->data=4;
	head->next=second;
	
	second->data=11;
	second->next=third;
	
	third->data=55;
	third->next=forth;
	
	forth->data=22;
	forth->next=NULL;
	
	//insertionAtFirst(head,45);
	//insertionAtIndex(head,3,2);
	insertionAtEnd(head,44);
	displayLinkedList(head);
	
return 0;
}