#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* createNode(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
int main() {
    struct Node*root=createNode(10);
    root->left=createNode(20);
    root->right=createNode(30);
    root->left->left=createNode(40);
    root->left->right=createNode(50);
    root->right->left=createNode(60);
    root->right->right=createNode(70);
    printf("Value at root->left->right=%d\n",root->left->right->data);
    return 0;
}