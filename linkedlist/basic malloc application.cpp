//basic malloc application
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *str;
	
	if ( ( str = ( char * ) malloc( 80 * sizeof( char ) ) ) == NULL );
	{
		printf ( "can not get the memory space" );
		exit(1);		//¬°²§±`°h¥X 
	}
	printf ( "enter the string:" );
	gets(str);
	printf ( "the string is:" );
	puts(str);
	
	return 0;  
}
