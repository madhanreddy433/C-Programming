#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct node *front;
struct node *rear;

bool isEmpty(){
    if(front == NULL && rear == NULL){
        return true;
    }else{
        return false;
    }
}
void enqueue(int data){
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    if(isEmpty()){
        front = rear = new;
        return;
    }
    rear->next = new;
    rear = new;
    return;
}
void dequeue(){
    struct node *tmp = front;
    if(isEmpty()){
        printf("queue is empty, please insert elements");
        return;
    }
    if(front == rear){
        front = rear = NULL;
    }else{
        front = tmp->next;
    }
    free(tmp);
}
void print(){
    struct node *tmp = front;
    if(isEmpty()){
        printf("Queue is Empty, please insert elements\n");
        return;
    }
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    return;
}

int main(){
    front = rear = NULL;
    int i;
    for(i=1;i<=5;i++){
        enqueue(i);
    }
    printf("queue is:\n");
    print();
    printf("\n queue after dequeue:\n");

    dequeue();
    print();

    enqueue(6);
    printf("\nqueue after enqueue\n");
    print();

    return 0;
}