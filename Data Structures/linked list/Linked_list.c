#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void insert_at_beginning(int data);
void insert_at_end(int data);
void insert_nth_position(int data, int position);
void print();
void delete_nth_element(int position);
void reverse();
int find_middle();

int main(){
	int i;
	head = NULL;

	for(i=1;i<10;i++){
		insert_at_end(i);
	}

	printf("\noriginal list is: ");
	print();
	printf("\nafter insert 0 at beginning List is: ");
	insert_at_beginning(0);
	print();
	printf("\nafter insert 0 at end List is: ");
	insert_at_end(0);
	print();
	printf("\nafter insert 0 at position 1, List is: ");
	insert_nth_position(0,1);
	print();
	printf("\nafter deleting 2nd position element, List is: ");
	delete_nth_element(2);
	print();
	printf("\nreverse of the list is: ");
	reverse();
	print();
	printf("\nmiddle element of List is: %d\n", find_middle());

	return 0;
}

void insert_at_end(int data){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;

	if(head == NULL){
		head = new;
		return;
	}

	struct node *tmp = head;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}

	tmp->next = new;

	return;
}

void print(){
	if(head == NULL){
		printf("\nList is Empty!\n");
		return;
	}

	struct node *tmp = head;

	while(tmp != NULL){
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	return;
}

void insert_at_beginning(int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;

	if(head == NULL){
		head = new;
		return;
	}

	new->next = head;
	head = new;

	return;
}

void insert_nth_position(int data, int position){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = data;
	new->next = NULL;
	
	struct node *tmp = head;
	int i;
	for(i=1;i<position-1;i++){
		tmp = tmp->next;
	}
	new->next = tmp->next;
	tmp->next = new;

	return;
}

void reverse(){
	if(head == NULL){
		return;
	}

	struct node *prev = NULL, *cur = head, *next;
	while(cur != NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	head = prev;
	return;
}

void delete_nth_element(int position){
	int i;
	struct node *tmp = head;
	for(i=1;i<position;i++){
		tmp = tmp->next;
	}
	struct node *tmp1 = tmp->next;
	tmp->next = tmp1->next;
	free(tmp1);
	return;
}

int find_middle(){
	struct node *slow_ptr = head, *fast_ptr = head;
	
	while(fast_ptr->next != NULL){
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}
	return slow_ptr->data;
}
