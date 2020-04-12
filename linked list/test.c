#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head;
void insert_at_beg(int data);
void print();

int main(){
    head == NULL;
    int n, data, i;
    printf("enter the no of nodes:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("enter an element to insert:");
        scanf("%d", &data);
        insert_at_beg(data);
        print();
    }
    printf("filnal list is:\n");
    print();

    return 0;
}

void insert_at_beg(int data){
    struct node *new = (struct node*)malloc(sizeof(struct node));
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

    if(head == NULL){
        printf("list is empty, please insert elements\n");
        return;
    }
    while(tmp->next != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    return;
}