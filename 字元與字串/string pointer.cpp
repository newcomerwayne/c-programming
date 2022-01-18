//string pointer
#include<stdio.h>

int main()
{
	char *str1 = "hello";
	char *str2;
	
	str2 = str1;
	printf ( "string1 => %s\n", str1 );
	printf ( "string2 => %s\n", str2 );
	return 0;
}
