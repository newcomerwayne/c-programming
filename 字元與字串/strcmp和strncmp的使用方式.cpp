//strcmp�Mstrncmp���ϥΤ覡
/*int strcmp ( const char *s1, const char *s2 )
 ����r��s1�Ps2�A�p�Gs1�Ps2�۵��h�Ǧ^0,�p�Gs1�p��s2�h�Ǧ^�t��,�p�Gs1�j��s2�h�Ǧ^����*/
/*int strncmp( const char *s1, const char *s2, size_t n);
����r��s1�Ps2(�̦h���n�Ӧr��)�A�p�Gs1�Ps2�۵��h�Ǧ^0,�p�Gs1�p��s2�h�Ǧ^�t��,�p�Gs1�j��s2�h�Ǧ^����*/
#include<stdio.h>
#include<string.h>

int main()
{
	const char *s1 = "happy new year";
	const char *s2 = "happy new year";
	const char *s3 = "happy holidays";
	
	printf ( "%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n", 
			"s1 = ", s1, "s2 = ", s2, "s3 =", s3, 
			"strcmp(s1, s2) = ",strcmp( s1, s2 ),
			"strcmp(s1, s3) = ",strcmp( s1, s3 ),
			"strcmp(s3, s1) = ",strcmp( s3, s1 ) );
			
	printf ( "%s%2d\n%s%2d\n%s%2d\n",
			"strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),		//�r��j�p�w�q�O�Ѧr���Ĥ@�Ӧr�����Ǩөw�q 
			"strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
			"strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7) );	
			
	return 0;			
  }  
 
