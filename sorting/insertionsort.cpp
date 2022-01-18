//insertion sort

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void insertionsort( int arr[ ], int length )
{
	int i , key, j;
	
	for ( i = 0; i < length; i++ )
	{
		key = arr[ i ];		 
		j = i - 1;
		
		while ( j >= 0 && arr[ j ] > key )	//移動arr[0..i-1]，如果大於key，則向前一位 
		{
			arr[ j + 1 ] = arr[ j ];
			j = j - 1;
		}
		arr[ j + 1 ] = key;
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
	int i;
	int arr[ size ];
	
	srand( time( NULL ) );
	
	for ( i = 0; i < size; i++ )
		arr[ i ] = rand() % 90 + 10;
	
	printf ( "unsorted:\n" );
	
	printarray( arr, size );
	insertionsort( arr, size );
	
	printf ( "sorted:\n" );
	
	printarray( arr, size );
		
	return 0;
}
