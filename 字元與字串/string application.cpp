//string application
#include<stdio.h>

int main()
{
	char string[ 3 ] = { 'h', 'i', '!' };
	int i;
	
	for ( i = 0; i < 3; i++ )
	{
		printf ( "%c", string[ i ] ); 
	}
	printf ( "\n" );
	return 0;
}
