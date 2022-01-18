//basic linked list
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int data;
	struct list * next;
};

typedef struct list node;
typedef node * link;

int main()
{
	link ptr;
	
	ptr = ( link ) malloc( sizeof( node ) );
	ptr->data = 5;
	ptr->next = NULL;
	
	ptr->next = ( link ) malloc( sizeof( node ) );
	ptr->next->data = 10;
	ptr->next->next = NULL;
	printf ( "first node = %d\n", ptr->data );
	printf ( "second node = %d\n", ptr->next->data );
	return 0;
}



