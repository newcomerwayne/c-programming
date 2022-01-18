//output the string 
#include<stdio.h>

int main()
{
	char string[] = "hello !";
	
	printf ( "/%s/\n", string );
	printf ( "/%2s/\n", string );
	printf ( "/%14s/\n", string );
	printf ( "/%-14s/\n", string );
	return 0;
}

