#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
}*head;

void insert_at_beginning(int data);
void print();
void reverse(struct node *head);

int main(){
	int num;
	
	head = NULL;
	
	insert_at_beginning(9);
	insert_at_beginning(8);
	insert_at_beginning(6);
	insert_at_beginning(5);
	insert_at_beginning(3);
	insert_at_beginning(2);
	
	printf("\noriginal List is: ");
	print();
	printf("\nenter an element to insert: ");
	scanf("%d", &num);
	insert_in_sorted_list(num);
	printf("\nafter inserting %d new List is: ", num);
	print();
	
	return 0;
}

void insert_at_beginning(int data){
	struct node *new = (struct node *)malloc(sizeof(struct node ));
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

void print(){
	if(head == NULL){
		return;
	}
	struct node *tmp = head;
	while(tmp != NULL){
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	return;
}

void insert_in_sorted_list(int data){
	struct node *p = NULL;
	struct node *q = head;
	
	if(data < head->data){
		insert_at_beginning(data);
		return;
	}
	
	while(q->next != NULL && q->data < data){
		p = q;
		q = q->next;
	}
	
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data  = data;
	new->next = NULL;
	
	new->next = q;
	p->next = new;
	
	return;
}
