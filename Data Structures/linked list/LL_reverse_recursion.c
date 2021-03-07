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
	int i;
	
	head = NULL;
	
	for(i=1;i<10;i++){
		insert_at_beginning(i);
	}
	
	printf("\noriginal List is: ");
	print();
	printf("\nreverse of List is: ");
	reverse(head);
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

void reverse(struct node *tmp){

	if(tmp->next == NULL){
		head = tmp;
		return;
	}
	reverse(tmp->next);
	struct node *tmp2 = tmp->next;
	tmp2->next = tmp;
	tmp->next = NULL;

}
