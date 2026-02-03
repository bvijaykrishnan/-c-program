#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char plateID[10];
    struct node *next;
};
struct node *top = NULL;
int isEmpty() {
    return (top == NULL);
}
void push(char id[]) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->plateID, id);
    newNode->next = top;
    top = newNode;
    printf("Plate %s added.\n", id);
}
void pop() {
    if (isEmpty()) {
        printf("No plates to remove.\n");
        return;
    }
    struct node *temp = top;
    printf("Plate removed → %s\n", top->plateID);
    top = top->next;
    free(temp);
}
void peek() {
    if (isEmpty()) {
        printf("No plates available.\n");
    } else {
        printf("Top plate → %s\n", top->plateID);
    }
}
void size() {
    int count = 0;
    struct node *temp = top;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    printf("Total plates: %d\n", count);
}
int main() {
    push("P1");
    push("P2");
    push("P3");

    pop();
    peek();
    size();
    return 0;
}