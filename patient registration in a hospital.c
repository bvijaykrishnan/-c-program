#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char patientID[10];
    struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
int isEmpty() {
    return (front == NULL);
}
void enqueue(char id[]) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->patientID, id);
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Patient %s registered\n", id);
}
void dequeue() {
    if (isEmpty()) {
        printf("No patients waiting\n");
        return;
    }
    struct node *temp = front;
    printf("Patient attended: %s\n", temp->patientID);
    front = front->next;
    if (front == NULL)
        rear = NULL;

    free(temp);
}
void displayFront() {
    if (isEmpty()) {
        printf("No patient is being attended\n");
    } else {
        printf("Current patient: %s\n", front->patientID);
    }
}
void queueSize() {
    int count = 0;
    struct node *temp = front;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total patients waiting: %d\n", count);
}
int main() {
    enqueue("P1");
    enqueue("P2");
    enqueue("P3");
    dequeue();
    displayFront();
    queueSize();
    return 0;
}