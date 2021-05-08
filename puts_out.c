#include <stdio.h>
#define DEF "I am a defined string"

int main(void)
{
	char str1[80] = "A string is assigned to me";
	const char* str2 = "A pointer is assigned to me";
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]); //address of the 6th element of the array
	puts(str2 + 4); //name itself is treated as an address

	return 0;
}