//bubble sort

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void bubblesort( int arr[] , int length )
{
	int i , j ,temp;
	
	for ( i = 0; i < length; i++ )
	{
		for ( j = 0; j < length - 1; j++ )
		{
			if ( arr[ j ] > arr [ j + 1 ] )
			{
				 temp = arr[ j];
				arr[ j ] = arr[ j + 1];
				arr[ j + 1] = temp;
			}
		}
	}
}
void printarray( int arr[], int length )
{
	int i;
	for ( i = 0; i < length; i++ )
	{
		printf ( "%3d", arr[ i ] );
	}
	printf ( "\n" );
}

int main()
{
	int i, arr[ size ];
	
	srand( time( NULL ) );
	
	for ( i = 0; i < size; i++ )
		arr[ i ] = rand() % 90 +10;
		
	printf ( "unsorted:\n" );
	printarray( arr, size );
	
	bubblesort( arr, size );
	
	printf ( "sorted:\n" );
	printarray( arr, size );
	  
	return 0;
}
