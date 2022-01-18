//strcmp和strncmp的使用方式
/*int strcmp ( const char *s1, const char *s2 )
 比較字串s1與s2，如果s1與s2相等則傳回0,如果s1小於s2則傳回負值,如果s1大於s2則傳回正值*/
/*int strncmp( const char *s1, const char *s2, size_t n);
比較字串s1與s2(最多比較n個字元)，如果s1與s2相等則傳回0,如果s1小於s2則傳回負值,如果s1大於s2則傳回正值*/
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
			"strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),		//字串大小定義是由字元第一個字母順序來定義 
			"strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),
			"strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7) );	
			
	return 0;			
  }  
 
