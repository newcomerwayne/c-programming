//calculate string length and compare string
#include<stdio.h>

int string_length( char str[] )
{
	int i = 0;
	while ( str[ i ] != '\0' )
		i++;
	return 0;	
}

int string_compare( char str1[], char str2[], int n1, int n2 )
{
	int i;
	int t = 1;
	int f = 0;
	
	if ( n1 != n2 )
		return f;
	else
		for ( i = 0; i < n1; i++ )
			if( str1[ i ] != str2[ i] )
				return f;
	return t;			
}

int main()
{
	char str1[ 5 ] = { 'c', 'h', 'e', 'n' };
	char str2[ 6 ] = { 'w', 'e', 'i', 'y', 'u' };
	int value;
	
	printf ( "str1 length => %d/n", string_length( str1 ) );
	printf ( " str2 length => %d/n", string_length( str2 ));
	
	value = string_compare( str1, str2, 5, 6 );
	
	if ( value = 1 )
	{
		printf ( "common" );
	}
	else
	{
		printf ( "difference" );
	}
	return 0;		
}
