#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void insert_at_beginning(int data);
void print();
void insert_at_end(int data);
void insert_at_nth(int data, int n);
void delete_at_nth(int n);

int main(){
    head = NULL;
    int n, i, data, end_elmnt;
    printf("enter the no of elements:");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("enter a list element: ");
        scanf("%d", &data);
        insert_at_beginning(data);
        print();
    }
    printf("final list is:\n");
    print();

    printf("enter an element to insert at the end:\n");
    scanf("%d", &end_elmnt);
    insert_at_end(end_elmnt);
    printf("list after inserting %d at end is:\n", end_elmnt);
    print();

    int nth_elmnt, position_to_insert;
    printf("enter position to insert and element:");
    scanf("%d%d", &position_to_insert, &nth_elmnt);
    printf("list after insert_at_nth call\n");
    insert_at_nth(nth_elmnt, position_to_insert);
    print();

    int position_to_delete;
    printf("enter the position to delete:\n");
    scanf("%d", &position_to_delete);
    printf("list after deletion:\n");
    delete_at_nth(position_to_delete);
    print();

    return 0;
}

void insert_at_beginning(int data){
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;

    if(head == NULL){
        head = new;
        return;
    }
    head->prev = new;
    new->next = head;
    head = new;
    return ;
}

void print(){
    struct node *tmp = head;
    if(tmp == NULL){
        printf("list is empty, please insert elements.\n");
        return;
    }
    printf("list is:");
    while(tmp != NULL){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    return;
}

void insert_at_end(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }
    struct node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    newNode->prev = tmp;
    tmp->next = newNode;
    return;
}

void insert_at_nth(int data, int n){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    int i;
    struct node *tmp1 = head;
    for(i=1;i<=n-1;i++){
        tmp1 = tmp1->next;
    }
    struct node *tmp2 = tmp1->next;
    newNode->next = tmp2;
    tmp2->prev = newNode;
    newNode->prev = tmp1;
    tmp1->next = newNode;
    return ;
}

void delete_at_nth(int n){
    struct node *tmp1 = head;
    if(head == NULL){
        printf("list is empty, please insert elements\n");
        return;
    }
    int i;
    for(i=1;i<=n-1;i++){
        tmp1 = tmp1->next;
    }
    struct node *tmp2 = tmp1->next;
    struct node *tmp3 = tmp2->next;

    tmp3->prev = tmp1;
    tmp1->next = tmp3;
    free(tmp2); 
    return;
}