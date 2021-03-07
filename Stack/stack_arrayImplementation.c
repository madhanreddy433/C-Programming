#include<stdio.h>
#define MAX_SIZE 101

int A[MAX_SIZE];
int top = -1;

void push(int data){
    if(top == MAX_SIZE-1){
        printf("Error: stack overflow!\n");
        return;
    }
    top += 1;
    A[top] = data;
}
void pop(){
    if(top == -1){
        printf("Error: stack is empty!\n");
        return;
    }
    top -= 1;
}

int top(){
    return A[top];
}

int isEmpty(){
    if(top == -1)
        return 1
    return 0;
}