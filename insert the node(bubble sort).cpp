// insert the node(bubble sort)
#include<stdlib.h>
#include<stdio.h>

struct list
{
	int data;
	struct list *next;
};

typedef struct list node;
typedef node * link;

link insert_node( link pointer, link tmp, int value )	//將節點插入排序串列 
{
	link newnode; 
	if ( tmp == NULL )									//新節點插在第一個節點前面 
	{
		newnode = ( link ) malloc( sizeof( node ) );
		newnode->data = value;							//設定新節點值 
		newnode->next = pointer;						//新節點指標指向串列第一個節點
		return newnode; 
	 }
	else
	{
		if ( tmp->next = NULL )							//新節點插在最後一個節點後面 
		{
			newnode = ( link )malloc( sizeof( node ) );
			newnode->data = value;						//設定新節點值 
			tmp->next = newnode;						//串列最後一個節點指標指向新節點
			newnode->next = NULL;
		}
		else											//新節點插在鏈結串列tmp指標後面 
		{
			newnode = ( link ) malloc( sizeof( node ) );
			newnode->data = value;
			newnode->next = tmp->next;	
			tmp->next = newnode;	//tmp指標指向新節點 
		}
		return pointer;					
	}  
	 
}

link search_insert_location( link pointer , int value )
{
	link tmp, btmp;
	int i, min;
	int otrue = 1;
	
	tmp = pointer;
	btmp = NULL;
	while ( tmp && otrue )
	{
		if ( value < tmp->data )
			otrue = 0;
		if ( otrue )
		{
			btmp = tmp;
			tmp = tmp->next;
		}	
	}
	
	pointer = insert_node( pointer, btmp, value );
	return pointer;
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
		tmp2 = ( link ) malloc( sizeof( node ) );
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
	int arr[] = { 3, 12, 8, 9, 11 };
	link ptr;
	
	ptr = create_list( arr, 5 );
	bubble_sort( ptr, 5 );
	printf ( "插入節點前先列印\n" );
	print_list( ptr );
	ptr = search_insert_location( ptr, 15 );
	printf ( "插入節點15再列印\n" );
	print_list( ptr );
	ptr = search_insert_location( ptr, 14 );
	printf ( "插入節點7再列印\n" );
	print_list( ptr );
	return 0;
}
