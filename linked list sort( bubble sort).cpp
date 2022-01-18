//由小到大列出鏈結串列值
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *next;
 } ;
 typedef struct list node;
 typedef node *link;
 
 link delete_node( link pointer, link tmp )
 {
 	if ( tmp == NULL )		//刪除第一個節點 
 		return pointer->next;
 	else
	 {
	 	if ( tmp->next->next == NULL )	//刪除最後一個節點	
	 		tmp ->next = NULL;
	 	else
		 tmp->next = tmp->next->next;	//刪除其他節點	
		return pointer; 	
	 }	
 }

void bubble_sort( link pointer, int num )
{
	link tmp;
	int i, j, value;
	
	for ( i = 1; i < num; i++ )
	{
		tmp = pointer;
		for ( j = 1; j < num; j++ )
		{
			if ( tmp->data > tmp->next->data )//如果前一筆大於下一筆則對調值 
			{
				value = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = value;
			}
			tmp = tmp->next;
		}
	}
}
 
 link create_list( int array[], int num )
 {
 	link tmp1, tmp2, pointer;
 	int i;
 	pointer = ( link ) malloc( sizeof( node ) );
	pointer->data = array[ 0 ];
	tmp1 = pointer;
	for ( i = 1; i < num; i++ )
	 {
	 	tmp2 = (link) malloc( sizeof( node ) );
	 	tmp2->next = NULL;
		tmp2->data = array[ i ];
	 	tmp1->next = tmp2;
	 	tmp1 = tmp1->next;
	  } 
	  return pointer;
  } 
  void print_list( link pointer )
{
	while ( pointer != NULL )
	{
		printf ( "%d\n", pointer->data );
		pointer = pointer->next;
	}
}
  
  int main()
  {
  	link ptr;
  	int arr[] = { 3, 10, 8, 9, 11 };
  	
  	ptr = create_list( arr, 5 );
  	bubble_sort( ptr, 5 );
  	print_list( ptr );
	return 0;  
  }
