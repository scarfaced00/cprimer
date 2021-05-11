/*Write a program in C to count a total number of duplicate elements in an array*/
#include <stdio.h>
#include <stdlib.h>

int iselement(int* arr, int num);

int main() {
    int n, i, j, k = 0;
    int dup_total = 0;
    int* arr = malloc(n * sizeof(int));
    int dup[10] = { 0, };
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);
    printf("Input %d number of elements in the array :\n", n);

    //read elements into the array
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    //check if there is duplicate element, and put it into a new array
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                if (!iselement(dup, arr[i]))
                    dup[k++] = arr[i];
            }
        }
    }

    //mark the end of the array of duplicate elements
    dup[k] = '\0';

    printf("Total number of duplicate elements found in the array is :\n");
    for (i = 0; dup[i] != '\0'; i++)
    {
        dup_total++;
    }
    printf("%d ", dup_total);
    free(arr);
    return 0;
}

//find if the specific number is in array
int iselement(int* arr, int num)
{
    int i, length;
    length = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < length; i++)
    {
        if (arr[i] == num)
            return 1;
    }
    return 0;
}