/*Write a program in C to count a total number of duplicate elements in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[100];
	int copy[100];
	int dup[100];

	int n, i, j, m = 1;
	int cnt = 0;
	printf("Input the number of elements to be stored in the array :");
	scanf("%d", &n);
	printf("Input %d elements in the array :\n", n);
	for (i = 0; i < n; i++)
	{
		printf("element - %d :", i);
		scanf("%d", &arr[i]);
		copy[i] = arr[i];
		dup[i] = 0;
	}

	for (i = 0; i < n; i++)
	{
		m = 1;
		for (j = 0; j < n; j++)
		{
			if (arr[i] == copy[j])
				dup[j] = m++;
		}
	}

	for (i = 0; i < n; i++)
	{
		if (dup[i] == 2)
			cnt++;
	}
	printf("Total number of duplicate elements found in the array is : %d", cnt);

}