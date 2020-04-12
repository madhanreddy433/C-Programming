#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *top;

void push(int data){
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    if(top == NULL){
        top = new;
        return;
    }
    new->next = top;
    top = new;

    return;
}
void pop(){
    if(top == NULL){
        printf("stack is empty\n");
        return;
    }
    struct node *tmp;
    tmp = top;
    top = tmp->next;
    free(tmp);

    return;
}
int top1(){
    if(top == NULL){
        printf("stack is empty\n");
        return;
    }
    return top->data;
}
void print(){
    if(top == NULL){
        printf("stack is empty\n");
        return;
    }
    struct node *tmp = top;
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    return;
}

int main(){
    int i;
    top = NULL;

    for(i=1;i<=5;i++){
        push(i);
    }
    printf("stack is:\n");
    print();
    printf("\n stack after pop:\n");

    pop();
    print();

    printf("top: %d\n", top1());
    return 0;
}
