//strlen
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[ 30 ] = "i want to find the nice job";
	char *str2 = " i believe i can do it";
	int i;
	
	printf ( "str1 length => %d\n", strlen( str1 ) );
	printf ( "str2 length => %d\n", strlen( str2 ) );
	
	return 0 ;
}
