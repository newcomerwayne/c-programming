//strcpy function
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[ 10 ] = "weiyu";
	char *str2 = "wayne";
	
	puts( "call strcpy before:" );
	printf ( "str1 = %s\n", str1 );
	printf ( "str2 = %s\n", str2 );
	
	strcpy( str1, str2 );
	
	puts( "call strcpy after" );
	printf ( "str1 = %s\n", str1 );
	printf ( "str2 = %s\n", str2 );
	
	return 0;
}
