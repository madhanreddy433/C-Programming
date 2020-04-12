#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *insert(struct node *root, int data);
bool search(struct node *root, int data);
int findMin(struct node *root);
int findMax(struct node *root);
int findHeight(struct node *root);
int main(){
    struct node *root = NULL;

    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 4);

    if(search(root, 10)){
        printf("found \n");
    }else{
        printf("not found \n");
    }
    printf("min value: %d \nmax value: %d and height: %d", findMax(root), findMin(root), findHeight(root));
    return 0;
}

struct node *insert(struct node *root, int data){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;

    if(root == NULL){
        root = new;
    }else if(data <= root->data){
        insert(root->left, data);
    }else{
        insert(root->right, data);
    }
    return root;
}

bool search(struct node *root, int data){
    if(root == NULL){
        return false;
    }else if(root->data == data){
        return true;
    }else if(data <= root->data){
        return search(root->left, data);
    }else{
        return search(root->right, data);
    }
}

int findMin(struct node *root){
    if(root == NULL){
        return -1;
    }else{
        while(root->left != NULL){
            root = root->left;
        }
        return root->data;
    }
}
int findMax(struct node *root){
    if(root == NULL){
        return -1;
    }else if(root->right == NULL){
        return root->data;
    }
    return findMax(root->right);
}
int findHeight(struct node *root){
    if(root == NULL){
        return -1;
    }
    int a = findHeight(root->right);
    int b = findHeight(root->left);
    return (a>b)?a:b + 1;
}