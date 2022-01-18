//linked list connect
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *next;	
};

typedef struct list node;
typedef node *link;

void print_list( link pointer )
{
	while ( pointer )
	{
		printf ( "%d\n", pointer->data );
		pointer = pointer->next;
	}
 }
 
link create_list( int array[], int num )
{
	link tmp1, tmp2, pointer;		//建立三個指標 
	int i;
	
	pointer = ( link ) malloc( sizeof( node ) );	//取得記憶體空間 //pointer指向串列的第一個節點 
	pointer->data = array[ 0 ];			//第一筆資料 
	tmp1 = pointer;						//移動暫時指標 
	for ( i = 1; i < num; i++ )
	{
		tmp2 = ( link )malloc( sizeof( node ) );//取得記憶體空間 
		tmp2->next = NULL;
		tmp2->data = array[ i ];
		tmp1->next = tmp2;		//舊節點指標指向新節點 
		tmp1 = tmp1->next;
	}
	return pointer;
  } 
 
int main()
{
	int arr[] = { 3, 12, 8, 9, 11 };
	link ptr;
	
	ptr = create_list( arr, 5 );
	print_list( ptr );
	return 0;
   }   
