//main( argc, argv ) application

#include<stdio.h>
#include<string.h>

int main( int argc,char *argv[] )
{	

	int i;
	
	puts( "input" );
	for ( i = 0; i < argc; i++ )
		puts( argv[ i ] );
		
	return 0;		
}	
	
	

