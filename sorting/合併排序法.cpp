//合併排序法
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void mergesort( int array[], int length );
void sortsubarray( int array[], int low, int high );
void merge( int array[], int left, int middle1, int middle2, int right );
void displayelements( int array[], int length );
void displaysubarray( int array[], int left, int right );

int main()
{
	int array[ size ];
	int i;
	
	srand( time( NULL ) );
	
	for ( i = 0; i < size; i++ )
		array[ i ] = rand() % 90 + 10;
	
	printf ( "unsorted array:\n" );
	displayelements( array, size );
	printf ( "\n\n" );
	mergesort( array, size );
	printf( "sorted array\n" );
	displayelements( array, size );
	return 0;	
 } 

void mergesort( int array[], int length )//合併排序 
{
	sortsubarray( array, 0, length - 1 );
 } 
 
void sortsubarray( int array[], int low, int high )//合併子陣列(使用遞迴) 
{
	int middle1, middle2;
	
	if ( (high - low ) >= 1 )
	{
		middle1 = ( low + high ) / 2;
		middle2 = middle1 + 1;
		
		printf ( "split:	" );
		displaysubarray( array, low, high );
		printf ( "\n	");
		displaysubarray( array, low, middle1 );
		printf( "\n		" );
		displaysubarray( array, middle2, high );
		printf ( "\n\n" );
		
		sortsubarray( array, low, middle1 );		//前半段遞迴呼叫 
		sortsubarray( array, middle2, high );		//後半段遞迴呼叫 
		
		merge( array, low, middle1, middle2, high );
	}
 } 
 
 void merge( int array[], int left, int middle1, int middle2, int right )
 {
 	int leftindex = left;
 	int rightindex = middle2;
 	int combineindex = left;
 	int temparray[ size ];
 	int i;
 	
 	printf( "merge:		");
	displaysubarray( array, left, middle1 );
	printf( "\n		");
	displaysubarray( array, middle2, right );
	printf( "\n");
	
	while( leftindex <= middle1 && rightindex <= right )
	{
		if ( array[ leftindex ] <= array[ rightindex ] )
		{ 
			temparray[ combineindex++ ] = array[ leftindex ];
		}	
		else
		{	
			temparray[ combineindex++ ] = array[ rightindex++ ];	
		} 
	}
	
	if ( leftindex == middle2 )
	{
		while ( rightindex <= right )
			temparray[ combineindex++ ] = array[ rightindex++ ];
	}
	else
	{
		while ( leftindex <= middle1 )
			temparray[ combineindex++ ] = array[ leftindex++ ];
	}
	
	for ( i = left; i <= right; i++ )
		array[ i ] = temparray[ i ];
	
	printf( "		" );
	displaysubarray( array, left, right );
	printf( "\n\n" );
 }
 
 void displaysubarray( int array[], int left, int right )
 {
 	int i;
 	
 	for ( i = 0; i < left; i++ )
 		printf ( "   " );
 		
 	for ( i = left; i <= right; i++ )
	 	printf ( "%4d", array[ i ] );
 }
 
 void displayelements( int array[], int length )
 {
 	displaysubarray( array, 0, length - 1 );
 }
