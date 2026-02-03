#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node 
{
    char orderID[10];
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
int isEmpty() {
    return (front == NULL);
}
void enqueue(char id[]) 
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->orderID, id);
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Order %s placed successfully\n", id);
}
void dequeue() {
    if (isEmpty()) {
        printf("No orders to process\n");
        return;
    }
    struct node *temp = front;
    printf("Order processed: %s\n", temp->orderID);
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
}
void displayFront() {
    if (isEmpty()) {
        printf("No pending orders\n");
    } else {
        printf("Next order to process: %s\n", front->orderID);
    }
}
void queueSize() {
    int count = 0;
    struct node *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Pending orders: %d\n", count);
}
int main() {
    enqueue("O101");
    enqueue("O102");
    enqueue("O103");
    dequeue();
    displayFront();
    queueSize();
    return 0;
}