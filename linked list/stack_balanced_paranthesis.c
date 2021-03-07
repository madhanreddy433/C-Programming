#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	char ch;
	struct node *link;
}*head = NULL;

void push(char ch);
void pop();
int isEmpty();
char top();
bool checkBalancedParanthesis(char *str, int len);
bool arePaired(char open, char close);

int main(){
	char ch[] = "[{a + (c+d)} + e]";
	
	if(checkBalancedParanthesis(ch, strlen(ch))){
		printf("\nBalanced\n");
	}else{
		printf("\nNot Balanced\n");
	}
	
	return 0;
}

void push(char ch){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	
	new->ch = ch;
	new->link = NULL;
	
	if(head == NULL){
		head = new;
		return;
	}
	
	new->link = head;
	head = new;
	
	return;
}

void pop(){
	if(head == NULL){
		return;
	}
	
	struct node *tmp = head;
	
	head = tmp->link;
	free(tmp);
	
	return;
}

int isEmpty(){
	if(head == NULL){
		return 1;
	}else{
		return 0;
	}
}

char top(){
	if(head == NULL){
		return;
	}
	return head->ch;
}

bool arePaired(char open, char close){
	if(open == '(' && close == ')'){
		return true;
	}else if(open == '{' && close == '}'){
		return true;
	}else if(open == '[' && close == ']'){
		return true;
	}else{
		return false;
	}
}
bool checkBalancedParanthesis(char *str, int len){
	int i;
	
	for(i=0;i<len;i++){
		if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
			push(str[i]);
		}else if(str[i] == ')' || str[i] == ']' || str[i] == '}'){
			if(isEmpty() || !arePaired(top(), str[i])){
				return false;
			}else{
				pop();
			}
		}
	}
	return isEmpty()?true:false;
}
