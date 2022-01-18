//string (pointer)
#include<stdio.h>
#include<string.h>

int main()
{
	char str[ 4 ][ 80 ];
	char *str1[ 4 ];
	int i;
	
	puts( "enter four string" );
	for ( i = 0; i < 4; i++ )
	{
		gets( str[ i ] );
		str1[ i ] = str[ i ];
	}
	puts( "reverse output" );
	for ( i = 3; i >= 0; i-- )
		puts( str1[ i ] );
	
	return 0;	
}
