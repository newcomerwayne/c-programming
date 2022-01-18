//basic read and output string
#include<stdio.h>

int main()
{
	char str1[ 15 ], str2[ 15 ], str3[ 15 ];
	
	printf ( "enter three strings:\n" );
	scanf ( "%s%s%s", str1, str2, str3 );
	
	printf ( "string1 => %s\n", str1 );
	printf ( "string2 => %s\n", str2 );
	printf ( "string3 => %s\n", str3 );
	
	return 0;
 } 
