//quick sort

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10

void quicksort( int arr[], int left, int right )
{
	int t, i, j, temp;
	
	if ( left > right)
	{
		return;
	}
	
	temp = arr[ left ];
	
	i = left;
	j = right;
	
	while ( i != j )
	{
		while ( i < j && arr[ j ] >= temp )	 //找出右邊最大 
		{
			j--;
		}
		
		while ( i < j && arr[ i ] <= temp )	//找出左邊最小 
		{
			i++;
		}
		
		if ( i < j )	//交換 
		{
			t = arr[ i ];
			arr[ i ] = arr[ j ];
			arr[ j ] = t;
		}
	} 
	arr[ left ] = arr[ i ];		//將i作為最左邊的指標 
	arr[ i ] = temp;				//設為樞紐 
	
	quicksort( arr, left, i-1 );		//排左邊 
	quicksort( arr, i+1, right );	//排右邊 
	 
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
	for( i = 0; i < size; i++ )
		arr[ i ] = rand() % 90 + 10;
	
	printf ( "unsorted:" );
	printarray( arr, size );
	
	quicksort( arr, 0, size - 1 );
	
	printf ( "sorted:" );
	printarray( arr, size );
	
	return 0;	 
}
