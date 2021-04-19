#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
	int data;
	struct node *next;
}*head;

void insert_at_end(int);
void print();
bool isLoop();

int main(){
	head = NULL;
	int i;
	
	for(i=0;i<5;i++){
		insert_at_end(i);
	}
	printf("\nOriginal LL is:");
	print();
	
	//create a loop 
	struct node *t1 = head, *t2 = head;
	t1 = t1->next->next;
	t2 = t2->next->next->next->next;
	t2->next = t1;
	
	if(isLoop()){
		printf("\nLoop present");
	}else{
		printf("\nNo Loops");
	}
	return 0;
}

void insert_at_end(int data){
	struct node *new = (struct node*)malloc(sizeof(struct node));
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
		return;
	}
	
	struct node *tmp = head;
	
	while(tmp != NULL){
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
	return;
}

bool isLoop(){
	struct node *fast = head, *slow = head;
	
	while(fast && slow && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		
		if(slow == fast){	//is slow and fast pointers meet then there is a Loop
			return true;
		}
	}
	return false;
}
