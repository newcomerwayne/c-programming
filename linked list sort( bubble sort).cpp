//�Ѥp��j�C�X�쵲��C��
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
 	if ( tmp == NULL )		//�R���Ĥ@�Ӹ`�I 
 		return pointer->next;
 	else
	 {
	 	if ( tmp->next->next == NULL )	//�R���̫�@�Ӹ`�I	
	 		tmp ->next = NULL;
	 	else
		 tmp->next = tmp->next->next;	//�R����L�`�I	
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
			if ( tmp->data > tmp->next->data )//�p�G�e�@���j��U�@���h��խ� 
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
