#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

void insert_at_beginning(int data);
void print();
void insert_at_end(int data);
void insert_at_nth(int data, int n);
void delete_nth_position(int position);
void reverse_iterate();
void reverse_recursive();
int main(){
	head = NULL;	//empty list
	int n, i, data, position;
	printf("enter the no of elements in list:");
	scanf("%d", &n);
	
	for(i =1; i<=n; i++){
		printf("enter a list element:");
		scanf("%d", &data);
		insert_at_beginning(data);
		print();	
	}
	printf("\nfinal list is:");
	print();
	printf("enter an element to insert at end:");
	scanf("%d", &data);
	insert_at_end(data);
	printf("list after inserting an element at end:");
	print();
	
	printf("enter position and element:");
	scanf("%d%d", &position,&data);
	insert_at_nth(data, position);
	printf("list after inserting an element at %d position:", position);
	print();

	int position_to_delete;
	printf("enter the position to delete:\n");
	scanf("%d", &position_to_delete);
	printf("list before deletion:\n");
	print();
	delete_nth_position(position_to_delete);
	printf("list after deletion:\n");
	print();

	printf("before reverse call\n");
	print();
	reverse_iterate();
	printf("after reverse call:\n");
	print();

	printf("after reverse_recursive call: ");
	reverse_recursive();
	print();
	return 0;
}

void insert_at_beginning(int data){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	
	if(head == NULL){
		head = new;
	}else{
		new->next = head;
		head = new;
	}	
	return;
}

void insert_at_end(int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	struct node *tmp = head;
	
	if(head == NULL){
		head = new;	
	}else{
		while(tmp->next != NULL){
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return;
}

void insert_at_nth(int data, int n){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	struct node *tmp = head;
	int i;
	for(i=0; i<n-2; i++){
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;
	
	return;
}
void print(){
	struct node *tmp = head;
	if(tmp == NULL){
		printf("list is empty, please insert elements into list\n");
	}
	printf("list is:");
	while(tmp != NULL){
		printf("%d", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
	return;
}

void delete_nth_position(int position){
	int i;
	struct node *tmp1, *tmp2;
	tmp1 = head;
	if(position == 1){
		head = tmp1->next;
		free(tmp1);
		return ;
	}
	for(i=1;i<=position-1;i++){
		tmp1 = tmp1->next;
	}
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);
	return;
}

void reverse_iterate(){
	struct node *previous, *current, *next;
	current = head;
	previous = NULL;
	while(current != NULL){
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	head = previous;
	return;
}

/*
To print linked list in forward and reverse order using recursion without reversing the list actually
void print_forward(){
	struct node *tmp = head;
	if(tmp == NULL){
		return;
	}
	printf("%d ", tmp->data);
	print_forward();
}

void print_reverse(){
	struct node* tmp = head;
	if(tmp == NULL){
		return;
	}
	print_revese();
	printf("%d ", tmp->data);
}
*/

void reverse_recursive(){
	struct node *tmp1 = head;
	if(tmp1->next == NULL){
		head = tmp1;
		return;
	}
	reverse_iterate(tmp1->next);
	struct node *tmp2 = tmp1->next;
	tmp2->next = tmp1;
	tmp1->next = NULL;
}