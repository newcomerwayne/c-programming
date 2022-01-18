//string array merge
#include<stdio.h>

void str_con ( char s1[], char s2[], char s3[], int n1, int n2 )
{
	int j;
	
	for ( j = 0; j < n1; j++ )
		s3[ j ] = s1[ j ];
	for ( j = n1; j < n1 + n2; j++ )
		s3[ j ] = s2[ j - n1 ];	
}

int main()
{
	char str1[ 5 ] = { 'c', 'h', 'e', 'n' };
	char str2[ 6 ] = { 'w', 'e', 'i', 'y', 'u' };
	char str3[ 11 ];
	int i;
	
	str_con( str1, str2, str3, 5, 6 );
	for ( i = 0; i < 11; i++ )
		printf ( "%c", str3[ i ] );
	return 0;	
}
