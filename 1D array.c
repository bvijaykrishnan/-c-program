#include <stdio.h>
int main() {
    int n, i;
    float sum = 0, average;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    int ages[n];
    printf("Enter the ages of %d people:", n);
    for(i = 0; i < n; i++) {
        printf("Person %d: ", i + 1);
        scanf("%d", &ages[i]);
        sum += ages[i]; 
    }
    average = sum / n;
    printf("\nTotal number of people: %d", n);
    printf("\nAverage age: %f\n", average);
    return 0;
}