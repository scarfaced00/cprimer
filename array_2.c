/*2. Write a program in C to read n number of values in an array and display it in reverse order..*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int* arr = malloc(n * sizeof(int));
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The values store into the array are: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nThe values store into the array in reverse are: ");

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
