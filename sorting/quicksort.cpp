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
		while ( i < j && arr[ j ] >= temp )	 //��X�k��̤j 
		{
			j--;
		}
		
		while ( i < j && arr[ i ] <= temp )	//��X����̤p 
		{
			i++;
		}
		
		if ( i < j )	//�洫 
		{
			t = arr[ i ];
			arr[ i ] = arr[ j ];
			arr[ j ] = t;
		}
	} 
	arr[ left ] = arr[ i ];		//�Ni�@���̥��䪺���� 
	arr[ i ] = temp;				//�]���ϯ� 
	
	quicksort( arr, left, i-1 );		//�ƥ��� 
	quicksort( arr, i+1, right );	//�ƥk�� 
	 
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
