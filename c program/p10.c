#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// Function to traverse and print the doubly linked list
void linkedListTraversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Function to create a doubly linked list with n nodes
struct node* createdll() {
    struct node *head = NULL;
    struct node *tail = NULL;
    int n;

    printf("Enter how many nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        struct node *p = (struct node *) malloc(sizeof(struct node));
        p->data = i;       // Assign data to the node
        p->next = NULL;    // Initialize next to NULL
        p->prev = NULL;    // Initialize prev to NULL

        if (head == NULL) { // First node case
            head = p;
            tail = p;
        } else {           // Subsequent nodes
            tail->next = p; // Link last node to the new node
            p->prev = tail; // Link new node back to the last node
            tail = p;       // Update tail to the new last node
        }
    }
    return head; // Return the head of the list
}

int main() {
    struct node *head = createdll(); // Create the doubly linked list and assign it to head
   
    linkedListTraversal(head); // Traverse and print the linked list
    return 0;
}
