//isdigit isalpha isalnum isxdigit的用法
//isdigit( int c ):如果c為一數字則傳回真， 否則傳回0
//isalpha( int c ):如果c為一字母則傳回真， 否則傳回0
//isalnum( int c ):如果c為一數字或字母則傳回真， 否則傳回0
//isxdigit( int c ):如果c為一16進位的數字則會傳回真，否則傳回0 
#include<stdio.h>
#include<ctype.h>

int main()
{
	printf ( "%s\n%s%s\n%ss%s\n\n", "according to isdigit:" ,
			isdigit( '8' ) ? " 8 is a": "8 is not a", " digit",
			isdigit( '#' ) ? " # is a": "# is not a", " digit");
			
	printf ( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", "according to isalpha:",
			isalpha( 'A' )? "A is a": "A is not a", "letter",
			isalpha( 'b' )? "b is a": "b is not a", "letter",
			isalpha( '&' )? "& is a": "& is not a", "letter",
			isalpha( '4' )? "4 is a": "4 is not a", "letter" );
			
	printf ( "%s\n%s%s\n%s%s\n%s%s\n\n", "according to isalnum:",
			isalnum( 'A' )? "A is a": "A is not a", "digit or a letter",
			isalnum( '8' )? "8 is a": "8 is not a", "digit or a letter",
			isalnum( '#' )? "# is a": "# is not a", "digit or a letter" );	
			
	printf ( "%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", "according to isxdigit:",
			isalpha( 'F' )? "F is a": "F is not a", "hexadecimal digit",
			isalpha( 'J' )? "J is a": "J is not a", "hexadecimal digit",
			isalpha( '7' )? "7 is a": "7 is not a", "hexadecimal digit",
			isalpha( '$' )? "$ is a": "$ is not a", "hexadecimal digit", 
			isalpha( 'f' )? "f is a": "f is not a", "hexadecimal digit" );
			
	return 0;								
 } 
