/*3.Write a program in C to find the sum of all elements of the array*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int* arr = malloc(n * sizeof(int));
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements stored in the array is : %d", sum);

    return 0;
}
