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
 
void mergesort( link head_ref )
{
	link a, b, head;
	head = head_ref;
	
	if ( ( head == NULL ) || ( head->next == NULL ) )
	{
		return;
	}
	
	frontbacksplit( head, a, b );
	
	mergesort( a );
	mergesort( b );
	
	head_ref = sortedmerge( a, b );
}

link sortedmerge( link a, link b )
{
	link result = NULL;
	
	if ( a == NULL )
	{
		return b;
	}
	
	if ( b == NULL )
	{
		return a;
	}
	
	if ( a->data <= b->data )
	{
		return  a;
		result->next = sortedmerge( a->next, b );
	}
	else
	{
		result = b;
		result->next = sortedmerge( a, b->next );
	}
	
	return result;
}

void frontbacksplit( link source, link front_ref, link back_ref )
{
	link fast, slow;
	slow = source;
	fast = source->next;
	
	while ( fast != NULL )
	{
		fast = fast->next;
		if ( fast != NULL )
		{
			slow = slow->next;
			fast = fast->next;
		}
	}
	
	front_ref = source;
	back_ref = slow->next;
	slow->next = NULL;
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
  	int n = sizeof( arr ) / sizeof( arr[ 0 ] );  
	  
  	
  	mergesort( ptr );
  	print_list( ptr );
	return 0;  
  }
