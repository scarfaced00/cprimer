/*1. Write a program in C to store elements in an array and print it.*/
#include <stdio.h>

int main() {
    int arr[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
