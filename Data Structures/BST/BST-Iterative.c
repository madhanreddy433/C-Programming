#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
	struct node *left;
	int data;
	struct node *right;
}*root = NULL;

void insert(int key);
bool search(int key);
void inOrderTravarsal(struct node *root);
void preOrderTravarsal(struct node *root);
void postOrderTravarsal(struct node *root);
int countNumberofNodes(struct node *root);
int height(struct node *root);

int main(){
	int i, len, key, A[] = {35, 25, 50, 20, 30, 40, 60};
	len = sizeof(A)/sizeof(A[0]);
	
	for(i=0;i<len;i++){
		insert(A[i]);
	}
	
	printf("Number of Nodes in this tree are: %d", countNumberofNodes(root));
	printf("\nHeight of the tree is %d", height(root));
	
	printf("\nPre Order Travarsal: ");
	preOrderTravarsal(root);
	
	printf("\nInorder Travarsal: ");
	inOrderTravarsal(root);
	
	printf("\nPost Order Travarsal: ");
	postOrderTravarsal(root);
	
	printf("\nenter key to search: ");
	scanf("%d", &key);
	
	if(search(key)){
		printf("\nFound the key");
	}else{
		printf("\nkey not found");
	}
	
	return 0;
}

void insert(int key){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->left = NULL;
	new->data = key;
	new->right = NULL;
	
	if(root == NULL){
		root = new;
		return;
	}
	
	struct node *tmp1 = NULL, *tmp2 = root;
	while(tmp2 != NULL){
		if(tmp2->data == key){
			return;
		}else if(key < tmp2->data){
			tmp1 = tmp2;
			tmp2 = tmp2->left;
		}else{
			tmp1 = tmp2;
			tmp2 = tmp2->right;
		}
	}
	
	if(key < tmp1->data){
		tmp1->left = new;
	}else{
		tmp1->right = new;
	}
	
	return;
}

bool search(int key){
	struct node *tmp = root;
	while(tmp != NULL){
		if(tmp->data == key){
			return true;
		}else if(key < tmp->data){
			tmp = tmp->left;
		}else{
			tmp = tmp->right;
		}
	}
	
	return false;
}

void inOrderTravarsal(struct node *root){

	if(root == NULL){
		return;
	}
	//<left><root><right>
	inOrderTravarsal(root->left);
	printf("%d ", root->data);
	inOrderTravarsal(root->right);
}

void preOrderTravarsal(struct node *root){
	
	if(root == NULL){
		return;
	}
	//<root><left><right>
	printf("%d ", root->data);
	preOrderTravarsal(root->left);
	preOrderTravarsal(root->right);
}

void postOrderTravarsal(struct node *root){
	
	if(root == NULL){
		return;
	}
	//<left><right><root>
	postOrderTravarsal(root->left);
	postOrderTravarsal(root->right);
	printf("%d ", root->data);
}

int countNumberofNodes(struct node *root){
	int lnodes, rnodes;
	
	if(root != NULL){
		lnodes = countNumberofNodes(root->left);
		rnodes = countNumberofNodes(root->right);
	
		return (lnodes + rnodes + 1);		
	}
	return 0;
}

int height(struct node *root){
	int lheight, rheight;
	
	if(root == NULL){
		return 0;
	}
	
	lheight = height(root->left);
	rheight = height(root->right);
	
	return (lheight < rheight)?lheight:rheight +1;
}
