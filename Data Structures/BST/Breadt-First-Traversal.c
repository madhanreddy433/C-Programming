#include<stdio.h>
#include<stdlib.h>


struct node {
	struct node *left, *right;
	int data;
}*root = NULL;


void insert(int key);
void bfs(struct node *root);
void printGivenLevel(struct node* root, int i);
int height(struct node *root);

int main(){
	int i, len, key, A[] = {35, 25, 50, 20, 30, 40, 60};
	len = sizeof(A)/sizeof(A[0]);
	
	for(i=0;i<len;i++){
		insert(A[i]);
	}
	
	printf("\nBreadth First Travarsal: ");
	bfs(root);	
	
	return 0;
}

void insert(int key){
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = key;
	new->left = NULL;
	new->right = NULL;
	
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
}

void bfs(struct node *root){
	int i, h = height(root);
	for(i=1;i<h;i++){
		printGivenLevel(root, i);
	}
}

int height(struct node *root){
	int lheight, rheight;
	if(root == NULL){
		return 0;
	}else{
		lheight = height(root->left);
		rheight = height(root->right);
	}
	
	return (lheight < rheight)?lheight:rheight + 1;
}

void printGivenLevel(struct node* root, int i){
	if(root == NULL){
		return;
	}
	int level = i;
	if(level == 1){
		printf("%d ", root->data);
	}else if(level > 1){
		printGivenLevel(root->left, level-1);
		printGivenLevel(root->right, level-1);
	}
}
