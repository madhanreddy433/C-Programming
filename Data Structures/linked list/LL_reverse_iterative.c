#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

void insert_at_beginning(int data);
void print();
void print_recursion();
void reverse();

int main(){
	head = NULL;	//empty list
	int n, i, data, position;
	printf("enter the no of elements in list:");
	scanf("%d", &n);
	
	for(i =1; i<=n; i++){
		printf("enter a list element:");
		scanf("%d", &data);
		insert_at_beginning(data);
		print_recursion();	
	}
	printf("\nfinal list is:");
	print_recursion();
	printf("\nreverse of list is:");
	reverse();
	print_recursion();
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

void print(){
	struct node *tmp = head;
	if(tmp == NULL){
		printf("list is empty, please insert elements into list\n");
	}
	printf("list is:");
	while(tmp != NULL){
		printf(" %d ", tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
	return;
}

void reverse(){
	struct node *prev, *current, *next;
	current = head;
	prev = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return;
}

void print_recursion(){
	struct node *tmp = head;

	if(tmp == NULL) return;
	printf(" %d ", tmp->data);
	print(tmp->next);

	return;
}
