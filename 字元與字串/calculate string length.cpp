//calculate string length
#include<stdio.h>

int string_length( char s[] )
{
	int i = 0;
	
	while ( s[ i ] != '\0' )
		i++;
	return i;	
}

int main()
{
	char string1[ 6 ] = { 'w', 'e', 'i', 'y', 'u' };
	char string2[ 5 ] = { 'c', 'h', 'e', 'n' };
	
	
	printf ( "first string length => %d\n", string_length( string1 ) );
	printf ( "second string length => %d\n", string_length( string2 ) );
	return 0;
}
