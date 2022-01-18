//linked list basic operation
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *next;
};

typedef list node;
typedef node *link;

int main()
{
	link ptr, head;
	int num, i;
	
	head = ( link ) malloc( sizeof( node ) );
	ptr = head;
	printf ( "enter five data:" );
	for ( i = 0; i <= 4; i++ )
	{
		scanf ( "%d", &num );
		ptr->data = num;
		ptr->next = ( link ) malloc( sizeof( node ) );
		
		if ( i == 4 )
		{
			ptr->next = NULL;
		}
		else
			ptr = ptr->next;
	}
	printf ( "order print list\n" );
	ptr = head;
	while ( ptr != NULL )
	{
		printf ( "list value => %d\n", ptr->data );
		ptr = ptr->next;
	}
	return 0;
}
