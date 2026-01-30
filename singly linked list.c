#include<stdio.h>
#include<stdlib.h>
struct student{
    long number;
    struct student*nextwrd;
};
int main()
{
    struct student*rollno1=(struct student*)malloc(sizeof(struct student));
     struct student*rollno2=(struct student*)malloc(sizeof(struct student));
     rollno1->number;
     rollno2->number;
     printf("Enter The 1st Number: ");
     scanf("%d",&rollno1->number);
     printf("Enter The 2nd Number :");
     scanf("%d",&rollno2->number);
     rollno1->nextwrd=rollno2;
     rollno2->nextwrd=NULL;
     struct student*head=rollno1;
    printf("\n");
     while(head!=0){
         printf("Roll %d-->",head->number);
         head=head->nextwrd;
     }
     printf("NULL");
     return 0;
     }