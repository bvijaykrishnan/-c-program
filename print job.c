#include <stdio.h>
#include <string.h>
#define MAX 5
char queue[MAX][10]; 
int front = -1, rear = -1;
int isEmpty() {
    return (front == -1);
}
void enqueue(char jobID[]) {
    if (rear == MAX - 1) {
        printf("Print queue is full\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    strcpy(queue[rear], jobID);
    printf("Print job %s added\n", jobID);
}
void dequeue() {
    if (isEmpty()) {
        printf("No print jobs to process\n");
        return;
    }
    printf("Job printed: %s\n", queue[front]);

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}
void displayFront() {
    if (isEmpty()) {
        printf("No pending print jobs\n");
    } else {
        printf("Next job to print: %s\n", queue[front]);
    }
}
void queueSize() {
    if (isEmpty()) {
        printf("Pending jobs: 0\n");
    } else {
        printf("Pending jobs: %d\n", rear - front + 1);
    }
}
int main() {
    enqueue("J1");
    enqueue("J2");
    enqueue("J3");
    dequeue();
    displayFront();
    queueSize();
    return 0;
}