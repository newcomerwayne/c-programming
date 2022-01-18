//print the string on the screen
#include<stdio.h>

int main()
{
	char string[] = "hello";
	int i = 0;
	
	while ( string[ i ] != '\0' )
		printf ( "%c", string[ i++ ] );
	printf ( "\n" );
	return 0;	
}
