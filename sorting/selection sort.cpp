//selection sort
#include<stdio.h>

void selectionsort( int arr[], int length )
{
	int i, j;
	
	for ( i = 0; i < length - 1; i++ )
	{
		int min_id = i;
		
		for ( j = i + 1; j < length; j++ )	//§ä³Ì¤p­È 
		{
			if ( arr[ j ] < arr[ min_id ] )
			{
				min_id = j;
			}
		}
		
		int temp = arr[ min_id ];
		arr[ min_id ] = arr[i];
		arr[ i ] = temp;	
	}
}

int main()
{
	int count;
	scanf( "%d", &count );
	int arr[ count ];
	int i;
	
	printf( "please enter number:" );
	for ( i = 0; i < count; i++ )
	{
		scanf ( "%d", &arr[ count ] );
	}
		printf ( "sort before:\n" );
		
	for ( i = 0; i < count; i++ )
		printf ( "%d", arr[ count ] );
		
	printf ( "\n" );
	selectionsort( arr, count );
	printf ( "sort after:\n" );
	for ( i = 0; i < count; i++ )
	{
		printf ( "%3d", arr[ i ] );
	}
	printf ( "\n" );
	return 0;
} 
