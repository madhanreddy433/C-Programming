#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *left;
	int data;
	struct node *right;
}*root = NULL;

struct q_node{
	struct q_node *next;
}*front = NULL, *rear = NULL;

void insert(int key);
int search(int key);
void breadthFirstTravarsal();
void inOrderTravarsal(struct node *root);
void preOrderTravarsal(struct node *root);
void postOrderTravarsal(struct node *root);
int countNumberofNodes(struct node *root);

int main(){
	int i, len, key, A[] = {35, 25, 50, 20, 30, 40, 60};
	len = sizeof(A)/sizeof(A[0]);
	
	for(i=0;i<len;i++){
		insert(A[i]);
	}
	
	printf("Number of Nodes in this tree are: %d", countNumberofNodes(root));
	
	printf("\nPre Order Travarsal: ");
	preOrderTravarsal(root);
	
	printf("\nInorder Travarsal: ");
	inOrderTravarsal(root);
	
	printf("\nPost Order Travarsal: ");
	postOrderTravarsal(root);
	
	printf("\nBreadth First Travarsal: ");
	breadthFirstTravarsal();
	
	printf("\nenter key to search: ");
	scanf("%d", &key);
	
	if(search(key) != -1){
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

int search(int key){
	while(root != NULL){
		if(root->data == key){
			return root->data;
		}else if(key < root->data){
			root = root->left;
		}else{
			root = root->right;
		}
	}
	
	return -1;
}

void breadthFirstTravarsal(){
	if(root == NULL){
		return;
	}
	
	enqueue(root);
	
	while(front != NULL && rear != NULL){
		struct node *current = front;
		printf("%d ", current->data);
		if(current->left != NULL){
			//printf("%d ", current->left->data);
			enqueue(current->left);
		}
		if(current->right != NULL){
			//printf("%d ", current->right->data);
			enqueue(current->right);
		}
		dequeue();
	}
	
	return;
}

void inOrderTravarsal(struct node *root){

	if(root == NULL){
		return;
	}
	
	inOrderTravarsal(root->left);
	printf("%d ", root->data);
	inOrderTravarsal(root->right);
}

void preOrderTravarsal(struct node *root){
	
	if(root == NULL){
		return;
	}
	
	printf("%d ", root->data);
	preOrderTravarsal(root->left);
	preOrderTravarsal(root->right);
}

void postOrderTravarsal(struct node *root){
	
	if(root == NULL){
		return;
	}
	
	postOrderTravarsal(root->left);
	postOrderTravarsal(root->right);
	printf("%d ", root->data);
}

void enqueue(struct node *root){
	struct q_node *new = (struct q_node*)malloc(sizeof(struct q_node));
	new = root;
	if(front == NULL && rear == NULL){
		front = new;
		rear = new;
	}
	rear->next = new;
	rear = new;
	return;
}

void dequeue(){
	if(front == NULL && rear == NULL){
		return;
	}
	struct q_node *tmp = front;
	
	if(front == rear){
		front = rear = NULL;
	}else{
		front = tmp->next;
		free(tmp);	
	}
	return;
}

struct node *top(){
	if(front == NULL && rear == NULL){
		return NULL;
	}
	
	return front;
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
