#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct stack* ptr , int data){
    if(isFull(ptr)){
        printf("Stack Overflow!");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=data;
    }
}

int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack underflow!");
        return -1;
    }
    else{
        int val;
        val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    
}

int main(){

    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    int a;
    printf("Enter Size:");
    scanf("%d",&a);
    s->size = a;

    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack Created!\n");

    push(s,2);
    push(s,4);
    push(s,6);
    push(s,3);

    printf("Popped element is :%d\n",pop(s));
    printf("Popped element is :%d\n",pop(s));
    printf("Popped element is :%d\n",pop(s));



    return 0;

}




