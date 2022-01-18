//strcmp function
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[ 10 ] = "chen";
	char *str2 = "weiyu";
	int i;
	
	i = strcmp( str1, str2 );
	if ( i == 0 )
		printf ( "string common\n" );
	else if ( i > 0 )
	{
		printf ( "string difference\n" );
		puts( "str1 string value > str2" );
	}
	else
	{
		printf ( "string difference\n" );
		puts( "str2 string value > str1" );
	}
	return 0;	
 } 
