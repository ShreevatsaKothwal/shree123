#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct queue* ptr){
    if(ptr->f == ptr->r){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue* ptr){
    if(ptr->r == ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue* ptr,int val){
    if(isFull(ptr)){
        printf("Queue Overload!");
    }
    else{
        ptr->r++;
        ptr->arr[ptr->r]= val;
    }
}

int dequeue(struct queue* ptr){
    if(isEmpty(ptr)){
        printf("Queue Underload!");
        return -1;
    }
    else{
        ptr->f++;
        int val;
        val = ptr->arr[ptr->f];
        return val;
    }
}

int main(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->size = 10;
    q->f = q->r = 0;

    q->arr = (int *)malloc(q->size*sizeof(int));
    enqueue (q,1);
    enqueue (q,5);
    enqueue (q,7);
    enqueue (q,2);

    printf("Popped element id :%d\n",dequeue(q));
    printf("Popped element id :%d\n",dequeue(q));
    printf("Popped element id :%d\n",dequeue(q));


    return 0;
}
















