//strcpy 和 strncpy使用方式
//char *strcpy( char *s1, const char *s2)將字串s2複製至陣列s1,並傳回s1
/*char *strncpy( char *s1, const char *s2, size_t n)
將字串s2的最多n個字元複製至陣列s1。並傳回s1。 */

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

