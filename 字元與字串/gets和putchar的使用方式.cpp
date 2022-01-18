//gets和putchar的使用方式
#include<stdio.h>

void reverse( const char* const sptr );

int main()
{
	char sentence[ 80 ];
	
	printf ( "enter a line of text:\n " );
	
	gets( sentence );
	
	printf ( "\nthe line printed backward is :\n" );
	reverse( sentence );
	
	return 0; 
 } 
 
 void reverse( const char * const sptr )
 {
 	if ( sptr[ 0 ] == '\0' )
 	{
 		return;
	 }
	else
	{
		reverse( &sptr[ 1 ] );
		
		purchar( sptr[ 0 ] );
	 } 
 }
