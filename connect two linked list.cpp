//connect two linked list
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
		printf ( "%d\n" , pointer->data );
		pointer = pointer->next;
	}
}

link create_list( int array[], int num )
{
	link tmp1, tmp2, pointer;
	int i;
	
	pointer = (link)malloc( sizeof( node ) );
	pointer->data = array[ 0 ];
	tmp1 = pointer;
	for ( i = 1; i < num; i++ )
	{
		tmp2 = (link)malloc( sizeof( node ) );
		tmp2->next = NULL;
		tmp2->data = array[ i ];
		tmp1->next = tmp2;
		tmp1 = tmp1->next; 
	}
	return pointer;
}

link concatenate( link pointer1, link pointer2 )	//連接函式 連接串列 
{
	link tmp;
	
	tmp = pointer1;
	while ( tmp->next )		//將暫時指標指向最後一個節點 
		tmp = tmp->next;
	tmp->next = pointer2;	//將最後節點指標指向第二個串列 
	return pointer1;	
}

int main()
{
	int arr1[] = { 3, 5, 6, 9, 4 };
	int arr2[] = { 21, 26, 46, 11, 14 };
	
	link ptr, ptr1, ptr2;
	
	ptr1 = create_list( arr1, 5 );
	ptr2 = create_list( arr2, 5 );
	ptr = concatenate( ptr1, ptr2 );
	print_list( ptr );
	return 0;
} 
