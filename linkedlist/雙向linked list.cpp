//���Vlinked list
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list *front;
	struct list *back;
 } ;
 typedef struct list node;
 typedef node *link;
 
 int main()
 {
 	link ptr, tail, head;
 	int num, i;
 	
 	tail = ( link )malloc( sizeof( node ) );
 	tail->back = NULL;
 	tail->front = NULL;
 	ptr = tail;
	printf ( "enter five data:" );
	
	for ( i = 0; i < 5; i++ )
	{
		scanf ( "%d", &num );
		ptr->data = num;
	
		head = ( link )malloc( sizeof( node ) );
		if ( i != 4 )
		{
			head->back = ptr;
			head->front = NULL;
			ptr->front = head;
			ptr = head;
		}
	}
	printf ( "�ϦV�C�L���V�쵲��C\n" );
	while ( ptr )
	{
		printf ( "��C�� ==> %d\n", ptr->data );
		ptr = ptr->back;
	}
	printf ( "���ǦC�L���V�쵲��C\n" );
	ptr = tail;
	while ( ptr )
	{
		printf ( "��C�� ==> %d\n", ptr->data );
		ptr = ptr->front;
	}
	return 0;
 }
