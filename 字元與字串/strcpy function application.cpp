//strcpy function application
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[ 10 ] = "wayne";
	char *str2 = "jason";
	char *s;

	
	puts( "call strcpy before" );
	printf ( "str1 = %s\n", str1 );
	printf ( "str2 = %s\n", str2 );
	
	s = strcpy( str1, str2 );
	
	puts( "call strcpy after" );
	printf ( "str1 = %s\n", str1 );
	printf ( "str2 = %s\n", str2 );
	printf ( "str2 = %s\n", s );
	return 0;
}
