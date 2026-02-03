#include <stdio.h>
#include <string.h>
#define MAX 10
char stack[MAX][20]; 
int top = -1;
int isEmpty() {
    return (top == -1);
}
void push(char action[]) {
    if (top == MAX - 1) {
        printf("Action stack full!\n");
        return;
    }
    strcpy(stack[++top], action);
    printf("Action saved: %s\n", action);
}
void pop() {
    if (isEmpty()) {
        printf("Nothing to undo.\n");
        return;
    }
    printf("Undo → %s\n", stack[top--]);
}
void peek() {
    if (isEmpty()) {
        printf("No recent action.\n");
    } else {
        printf("Last action → %s\n", stack[top]);
    }
}
void size() {
    printf("Undo actions available: %d\n", top + 1);
}
int main() {
    push("Type A");
    push("Type B");
    push("Type C");
    pop();
    peek();
    size();
    return 0;
}