// merge sort
#include<stdio.h>
#include<stdlib.h>

void merge( int arr[], int low, int mid, int high )
{
	int i, j , k;
	int n1 = mid - low + 1;
	int n2 = high - mid;
	
	int a[ n1 ], b[ n2 ];
	
	for ( i = 0; i < n1 ; i++ )
		a[ n1 ] = arr[ low + i ];
	for ( j = 0; j < n2; j++ )
		b[ n2 ] = arr[ mid + 1 + j ];
		
	i = 0;
	j = 0;
	k = low;
	
	while ( i < n1 && j < n2 )
		{
			if ( a[ i ] <= b[ j ] )
			{
				arr[ k ] = a[ i ];
				i++;
			}
			else
			{
				arr[ k ] = b[ j ];
				j++;
			}
			k++;
		}
	
	while ( i < n1 )
	{
		arr[ k ] = a[ i ];
		i++;
		k++;
	}
	
	while ( j < n2 )
	{
		arr[ k ] = b[ j ];
		j++;
		k++;
	}	
}

void mergesort( int arr[], int low, int high )
{
	if ( low < high )
	{
		int mid = low + ( high - low ) / 2;
		
		mergesort( arr, low, mid );
		mergesort( arr, mid + 1, high );
		
		merge( arr, low, mid, high );
	}
}

void printarray( int s[], int size )
{
	int i;
	for ( i = 0; i < size; i++ )
		printf ( "%3d", s[ i ] );
	printf( "\n" );	
}

int main()
{
	int arr[] = { 12, 11, 13, 6, 5, 7 };
	int arr_size = sizeof( arr ) / sizeof( arr[ 0 ] );
	
	printf ( "given array is \n" );
	printarray( arr, arr_size );
	
	mergesort( arr, 0, arr_size - 1 );
	
	printf ( "\nsorted array is\n");
	printarray( arr, arr_size );
	return 0;
}
