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

link insert_node( link pointer, link tmp, int value )	//�N�`�I���J�ƧǦ�C 
{
	link newnode; 
	if ( tmp == NULL )									//�s�`�I���b�Ĥ@�Ӹ`�I�e�� 
	{
		newnode = ( link ) malloc( sizeof( node ) );
		newnode->data = value;							//�]�w�s�`�I�� 
		newnode->next = pointer;						//�s�`�I���Ы��V��C�Ĥ@�Ӹ`�I
		return newnode; 
	 }
	else
	{
		if ( tmp->next = NULL )							//�s�`�I���b�̫�@�Ӹ`�I�᭱ 
		{
			newnode = ( link )malloc( sizeof( node ) );
			newnode->data = value;						//�]�w�s�`�I�� 
			tmp->next = newnode;						//��C�̫�@�Ӹ`�I���Ы��V�s�`�I
			newnode->next = NULL;
		}
		else											//�s�`�I���b�쵲��Ctmp���Ы᭱ 
		{
			newnode = ( link ) malloc( sizeof( node ) );
			newnode->data = value;
			newnode->next = tmp->next;	
			tmp->next = newnode;	//tmp���Ы��V�s�`�I 
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
	printf ( "���J�`�I�e���C�L\n" );
	print_list( ptr );
	ptr = search_insert_location( ptr, 15 );
	printf ( "���J�`�I15�A�C�L\n" );
	print_list( ptr );
	ptr = search_insert_location( ptr, 14 );
	printf ( "���J�`�I7�A�C�L\n" );
	print_list( ptr );
	return 0;
}
