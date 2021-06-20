//good design #1
#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[])
{
	int ch; //int to hold EOF
	FILE *fp; 
	fp = fopen("wacky.txt", "r"); 
	ch = getc(fp); //get initial input
	while(ch != EOF)
	{
		putchar(ch); //process input
		ch = getc(fp); //get next input
	}
	
	return 0;
}
