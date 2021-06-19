/*file_echo_eof.c--reapeats input to end of file*/
#include <stdio.h>
#include <stdlib.h> //for exit()
int main(void)
{
	int ch;
	FILE *fp;
	char fname[50]; //to hold the file name
	
	printf("Enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r"); //open file for reading
	if (fp == NULL) //attempted failed
	{
		printf("Failed to open file. Bye\n");
		exit(1); //quit program
	}

//getc(fp) gets a character from the open file
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp); //close the file
		
	return 0;
}
