#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* insert_at_end(struct node*, int);
void print(struct node *);
struct node *merge(struct node *first, struct node *second);

int main(){
	
	struct node *first = NULL, *second = NULL, *merge_head = NULL;
	first = insert_at_end(first, 2);
	first = insert_at_end(first, 4);
	first = insert_at_end(first, 6);
	second = insert_at_end(second, 3);
	second = insert_at_end(second, 5);
	second = insert_at_end(second, 7);
	
	printf("\nFirst List is: ");
	print(first);
	printf("\nSecond List is: ");
	print(second);
	printf("\nAfter Merging above two Lists: ");
	merge_head = merge(first, second);
	print(merge_head);
	return 0;
}

struct node *insert_at_end(struct node *head, int data){
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
	
	return head;
}

void print(struct node *head){
	
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

struct node* merge(struct node *first, struct node *second){
	struct node *m_first = NULL, *m_last = NULL;
	
	if(first->data < second->data){
		m_first = first;
		m_last = first;
		first = first->next;
		m_last->next = NULL;
	}else{
		m_first = second;
		m_last = second;
		second = second->next;
		m_last->next = NULL;
	}
	
	while(first != NULL && second != NULL){
		if(first->data < second->data){
			m_last->next = first;
			m_last = first;
			first = first->next;
			m_last->next = NULL;
		}else{
			m_last->next = second;
			m_last = second;
			second = second->next;
			m_last->next = NULL;
		}
	}

	if(first != NULL){
		m_last->next = first;
	}else{
		m_last->next = second;
	}
	
	return m_first;
}
