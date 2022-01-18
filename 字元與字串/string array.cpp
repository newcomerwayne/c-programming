//string array
#include<stdio.h>

int main()
{
	char str[ 4 ][ 80 ];
	int i;
	
	puts( "enter four string" );
	for ( i = 0; i < 4; i++ )
		gets( str[ i ] );
	
	puts( "reverse output" );
	for ( i = 3; i >= 0; i-- )
		puts( str[ i ] );
	return 0;		
}
