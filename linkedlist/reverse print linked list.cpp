//reverse print linked list
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list * next;
}; 

typedef struct list node;
typedef node *link;

int main()
{
	link ptr, head, tail;
	int num, i;
	
	tail = ( link )malloc( sizeof( node ) );
	tail->next = NULL;
	ptr = tail;
	printf ( "enter five data:" );
	for ( i = 0; i <= 4; i++ )
	{
		scanf ( "%d", &num );
		ptr->data = num;
		head = ( link )malloc( sizeof( node ) );
		head->next = ptr;
		ptr = head;
	}
	ptr = ptr->next;
	printf ( "reverse print link list" );
	while ( ptr != NULL )
	{
		printf ( "list value: %d\n", ptr->data );
		ptr = ptr->next;
	}
	return 0;
}
