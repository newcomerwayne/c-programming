//¿ï¾Ü±Æ§Çªk
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void selectionsort( int array[], int length );
void swap( int array[], int first, int second );
void printpass( int array[], int length, int pass, int index );


int main()
{
	int array[ size ];
	int i;
	
	srand( time( NULL ) );
	
	for ( i = 0; i < size; i++ )
	{
		array[ i ] = rand() % 90 + 10;
	}
	printf ( "unsorted array\n" );
	
	for( i = 0; i < size; i++ )
	{
		printf ( "%3d", array[ i ] );
	 } 
	
	printf ( "\n\n" );
	selectionsort( array, size );
	printf ( "sorted array:\n" );
	
	for ( i = 0; i < size; i++ )
	{
		printf ( "%3d", array[ i ] );
	}
	
	return 0 ;
 } 
 


void selectionsort( int array[], int length )
{
	int smallest;
	int i, j;
	
	for ( i = 0; i < length - 1; i++ )
	{
		smallest = i;
		
		for ( j = i + 1; j < length ; j++ )
		
			if ( array[ j ] < array[ smallest ] )
			{
				smallest = j;
			}
			
		swap( array, i, smallest );
		printpass( array ,length, i + 1, smallest );
		
	}
 } 
 
 void swap( int array[], int first, int second )
 {
 	int temp;
 	temp = array[ first ];
 	array[ first ] = array[ second ];
 	array[ second ] = temp;
 }
 
 void printpass ( int array[], int length, int pass, int index )
 {
 	int i;
	 
	printf ( "after pass %2d:",  pass );
	
	for ( i = 0; i < index; i++ )
	{
		printf ( "%4d", array[ i ] );
	}
	printf ( "%4d*", array[ index ] );
	
	for ( i = index + 1 ; i < length; i++ )
		printf ( "%4d" ,array[ i ] );
		
	printf( "\n				");
	
	for ( i = 0; i < pass; i++ )
	{
		printf ( "--  " );
		
	}
	
	printf ( "\n" );  
  } 
