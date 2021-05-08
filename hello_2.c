/*convers command-line argument to number print with puts*/
#include <stdio.h>
#include <stdlib.h> //use of atoi

int main(int argc, char* argv[])
{
	int i, times;
	//error check
	if (argc < 2 || (times = atoi(argv[1])) < 1)
	{
		printf("Usage : %s should be a positive integer\n", argv[0]);
		return 1;
	}
	else
		for (i = 0; i < times; i++)
		{
			puts("Hello, beautiful");
		}
}