#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node Node;

Node *createList( int*, int ); //��C�إߨ�� 
Node printList( Node * );  //��C�C�L��� 
void freeList( Node * );    //�����C�O�ЪŶ���� 
Node *searchNode( Node *, int ); //�j�M�`�I��� 
void *insertNode( Node *, int ); //���J�`�I��� 

int main(int argc, char *argv[])
{

  Node *first,*node;
  int arr[] = { 12, 38, 57 };
  first = createList( arr, 3 );
  printList( first );

  
  node=searchNode( first,57 ); //��X�`�I�Ȭ�38����}
  insertNode( node, 11); //�N�`�I46���J�b�`�I38����
  printList( first ); 
  freeList( first );
  
  system( "PAUSE" );	 
  return 0;
}

//��C�إߨ�� 
Node *createList( int *arr,int len ){
	int i;
	Node *first,*current,*previous;
	for(i = 0;i < len; i++ ){
		current = ( Node * ) malloc( sizeof(Node) );//�إ߷s�`�I
		current->data = arr[ i ];  //�]�w�`�I����Ʀ���
		if ( i == 0 ){
		first = current;  //�p�G�O�Ĥ@�Ӧ��������frist���V�ثe���`�I 
		} else {
			previous->next = current;//��e�@�Ӫ�next���V�ثe���`�I 
		}
		current -> next = NULL; //��ثe���`�I��next���VNULL
		previous = current; //��e�@�Ӹ`�I�]���ثe���`�I 
	}
	return first;
}

//��C�C�L���
Node printList( Node *first ) {
	Node *node = first; //�Nnode���V�Ĥ@�Ӹ`�I
	if ( first == NULL ){
		printf("List is empty!\n");
	} else {
		while ( node != NULL ) {
			printf("%3d",node->data);
			node = node->next;
		}
		printf("\n");
	}
} 

//�����C�O�ЪŶ����
void freeList( Node *first ) {
	Node *current,*tmp;
	current = first;
	while( current != NULL ) {
		tmp=current;
		current=current->next;
		free(tmp);
	}
}

 //�j�M�`�I��� 
Node *searchNode ( Node *first, int item ) {
	Node *node = first;
	while ( node != NULL ) {
		if ( node->data == item ) { //�p�Gnode��data����item 
			return node;  //�Ǧ^node���Ӹ`�I����} 
		} else {
			node = node->next; //�_�h�N���Ы��V�U�@�Ӹ`�I 
		}
	}
	return NULL; //�p�G�䤣��ŦX���`�I�A�h�Ǧ^NULL 
}

 //���J�`�I��� 
void *insertNode( Node *node, int item )
{
	Node *newnode;
	newnode = ( Node * ) malloc( sizeof( Node ) );
	newnode->data = item;
	newnode->next = node->next;
	node->next = newnode;
}
