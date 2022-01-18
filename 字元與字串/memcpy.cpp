//使用memcpy
//void *memcpy( void *s1, const void *s2, size_t n);
//從指標s2所指之物件複製n個字元到s1所指的物件。會傳回指向s1的指標 
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[ 17 ];
	char s2[] = "copy this string";
	
	memcpy( s1, s2, 17 );
	printf ( "%s\n%s\"%s\"\n",
			"after s2 is copied into s1 with memcpy,",
			"s1 contains", s1 );
			
	return 0;		
 } 
