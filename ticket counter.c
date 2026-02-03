#include <stdio.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
int isEmpty() {
    return (front == -1);
}
void enqueue(int customerID) {
    if (rear == MAX - 1) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = customerID;
    printf("Customer %d added to queue\n", customerID);
}
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty. No customer to serve\n");
        return;
    }
    printf("Customer served: %d\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}
void displayFront() {
    if (isEmpty()) {
        printf("Queue is empty\n");
    } else {
        printf("Current customer being served: %d\n", queue[front]);
    }
}
void queueSize() {
    if (isEmpty()) {
        printf("Queue size: 0\n");
    } else {
        printf("Queue size: %d\n", rear - front + 1);
    }
}
int main() {
    enqueue(101);
    enqueue(102);
    enqueue(103);
    dequeue();
    displayFront();
    queueSize();
    return 0;
}