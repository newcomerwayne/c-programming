//string compare

#include<stdio.h>
#include<stdlib.h>

int string_compare( char s1[], char s2[], int n1, int n2 )
{
	int i;
	int t = 1;
	int f = 0;
	
	if ( n1 != n2 )
		return f;
	else
		for ( i = 0; i < n1; i++ )
		if ( s1[ i ] != s2[ i ] )
			return f;
	return t;			
}

int main()
{
	char string1[ 5 ] = { 'c', 'h', 'e', 'n' };
	char string2[ 6 ] = { 'w', 'e', 'i', 'y', 'u' };
	int value;
	
	value = string_compare( string1, string2, 5, 6 );
	if ( value )
	{
		printf ( "same" );
	}
	else 
	{
		printf ( "difference" );
	}
	return 0;
}
