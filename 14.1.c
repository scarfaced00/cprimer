#include <stdio.h>
#include <string.h>
#define MAXTITL 41 /*maximum length of title +1 */ 
#define MAXAUTL 31 /*maximum length of author's name +1 */ 
char* s_gets(char* st, int n);
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};


int main(void)
{
	struct book library; /*declare library as a book variable*/

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL); /*access to the title portion*/
	printf("Now enter the author\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");

	return 0;
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st, '\n'); //look for newline
		if (find) //if the address is not Null
			*find = '\0'; //place a null character there
		else
			while (getchar() != 'n')
				continue; //dispose of rest of line
	}
	return ret_val;
}
