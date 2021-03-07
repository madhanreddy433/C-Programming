#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
	char ch;
	struct node *next;
};
struct node *top = NULL;

void reverse(char *string, int len);
void push(char ch);
void pop();
char top1();
void print();

int main(){
	char ch[] = "madhan";
	int i;
	
	printf("\n%s\n", ch);
	reverse(ch, strlen(ch));
	printf("\n%s\n", ch);
	
	return 0;
}

void push(char ch){
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->ch = ch;
	new->next = NULL;
	
	if(top == NULL){
		top = new;
		return;
	}
	
	new->next = top;
	top = new;
	
	return;
}

void print(){
	if(top == NULL){
		return;
	}
	
	struct node *tmp = top;
	
	while(tmp != NULL){
		printf("%c", tmp->ch);
		tmp = tmp->next;
	}
	
	printf("\n");
	
	return;
}

void pop(){
	if(top == NULL){
		return;
	}
	
	struct node *tmp = top;
	
	top = tmp->next;
	free(tmp);
	
	return;
}

char top1(){
	if(top == NULL){
		return;
	}
	
	return top->ch;
}

void reverse(char *string, int len){
	int i;
	
	for(i=0;i<len;i++){
		push(string[i]);
	}
	
	for(i=0;i<len;i++){
		string[i] = top1();
		//printf("%c ", top1());
		pop();
	}
	
	return;
}
