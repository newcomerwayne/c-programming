//strcpy �M strncpy�ϥΤ覡
//char *strcpy( char *s1, const char *s2)�N�r��s2�ƻs�ܰ}�Cs1,�öǦ^s1
/*char *strncpy( char *s1, const char *s2, size_t n)
�N�r��s2���̦hn�Ӧr���ƻs�ܰ}�Cs1�C�öǦ^s1�C */

#include<stdio.h>
#include<string.h>
int main()
{
	char x[] = "happy birthday to you";
	char y[ 25 ];
	char z[ 15 ];
	
	printf ( "%s%s\n%s%s\n", "the string in array x is:", x,
			"the string in array y is:", strcpy( y, x ) );
	
	strncpy( z, x, 14 );
	
	z[ 14 ] = '\0';
	printf ( "the string in array z is:%s\n", z );
	
	return 0;		
}

