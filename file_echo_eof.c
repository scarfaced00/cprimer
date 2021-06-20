//good design #2
#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[])
{
	int ch; //int to hold EOF
	FILE *fp; 
	fp = fopen("wacky.txt", "r"); 
	ch = getc(fp); //get initial input
	while((ch = getc(fp)) != EOF)
	{
		putchar(ch); //process input
	}
	
	return 0;
}
