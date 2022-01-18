//´¡¤J±Æ§Çªk
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void insertionsort( int array[], int length );
void printpass( int array[], int length, int pass, int index );

int main()
{
	int array[ size ];
	int i;
	
	srand( time( NULL ) );
	
	for( i = 0; i < size; i++ )
		array[ i ] = rand() % 90 + 10;
	
	printf ( "unsorted array:\n" );
	
	for ( i = 0; i < size ; i++ )
	printf ( "%4d", array[ i ] );
	
	printf ( "\n\n" );
	insertionsort( array, size );
	printf ( "sorted array:\n" );
	
	for ( i = 0; i < size; i++ )
	{
		printf ( "%4d", array[ i ] );	
	}
	
	return 0;	
}

void insertionsort( int array[], int length )
{
	int insert;
	int i;
	
	for ( i = 1; i < length; i++ )
	{
		int moveitem = i;
		insert = array[ i ];
		
		while ( moveitem > 0 && array[ moveitem - 1 ] > insert )
		{
			array[ moveitem ] = array[ moveitem - 1 ];
			--moveitem;
		 } 
		
		array[ moveitem ] = insert;
		printpass( array, length, i , moveitem ); 
		 
	}
 } 
 
 void printpass( int array[], int length, int pass, int index )
 {
 	int i;
	 
	 printf ( "after pass %d", pass );
	 
	 for ( i = 1; i < index; i++ )
	 {
	 	printf ( "%4d", array[ i ] );
	  } 
	 
	 printf ( "%4d*", array[ index ] );
	 
	 for ( i = index + 1; i < length; i++ )
	 	printf ( "%4d", array[ i ] );
	 	
		printf ( "\n			" );
	 	
	 	for ( i = 0; i <= pass; i++ )
	 		printf ( "-- " );
	
	printf ( "\n" );		  
 }
