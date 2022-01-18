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

void selection_sort( link pointer, int num )
{
	link tmp, btmp;
	int i, min;
	
	for ( i = 0; i < num; i++ )
	{
		tmp = pointer;
		min = tmp->data;
		btmp = NULL;		//暫時設定未來將指向最小值節點 
		while ( tmp->next )
		{
			if ( min > tmp->next->data )
			{
				min = tmp->next->data;		 
				btmp = tmp;				//指向最小值節點
			}
			tmp = tmp->next;
		}
		printf ( "%d\n", min );
		pointer = delete_node( pointer, btmp );
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
  
  int main()
  {
  	link ptr;
  	int arr[] = { 3, 12, 8, 9, 11 };
  	
  	ptr = create_list( arr, 5 );
  	selection_sort( ptr, 5 );
	return 0;  
  }
