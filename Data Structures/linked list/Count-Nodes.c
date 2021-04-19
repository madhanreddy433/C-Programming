#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *left, *right;
	int data;
}*root= NULL;

void insert(int key);
void inorderPrint(struct node *root);
int height(struct node *root);
int countNodes(struct node *root);
int countNodeswithTwoNodes(struct node *root);
int countLeafNodes(struct node *root);

int main(){

	int i, len, key, A[] = {35, 25, 50, 20, 30, 40, 60};
	len = sizeof(A)/sizeof(A[0]);
	
	for(i=0;i<len;i++){
		insert(A[i]);
	}
	
	printf("Inorder travarsal of BST is: ");
	inorderPrint(root);
	
	printf("\nHeight of the tree is %d ", height(root));
	printf("\nNumber of Nodes in the tree are %d ", countNodes(root));
	printf("\nNumber of Nodes with two childs are %d ", countNodeswithTwoNodes(root));
	printf("\nNumber of Leaf Nodes are %d ", countLeafNodes(root));
	
	return 0;	
}

void insert(int key){
	
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->left = NULL;
	new->data = key;
	new->right = NULL;
	
	
	struct node *tmp1 = NULL, *tmp2 = root;
	
	if(tmp2 == NULL){
		root = new;
		return;
	}
	
	while(tmp2 != NULL){
		if(key < tmp2->data){
			tmp1 = tmp2;
			tmp2 = tmp2->left;
		}else{
			tmp1 = tmp2;
			tmp2 = tmp1->right;
		}	
	}
	
	if(key < tmp1->data){
		tmp1->left = new;
	}else{
		tmp1->right = new;
	}
}

void inorderPrint(struct node *root){
	if(root == NULL){
		return;
	}
	inorderPrint(root->left);
	printf("%d ", root->data);
	inorderPrint(root->right);
}

int height(struct node *root){
	int lheight, rheight;
	
	if(root == NULL){
		return 0;
	}
	
	lheight = height(root->left);
	rheight = height(root->right);
	
	if(lheight > rheight){
		return lheight + 1;
	}else{
		return rheight + 1;
	}
}

int countNodes(struct node *root){
	int lnodes, rnodes;
	
	if(root == NULL){
		return 0;
	}
	
	lnodes = countNodes(root->left);
	rnodes = countNodes(root->right);
	
	return lnodes + rnodes + 1;
}

int countNodeswithTwoNodes(struct node *root){
	int lnodes, rnodes;
	
	if(root == NULL){
		return 0;
	}
	
	lnodes = countNodeswithTwoNodes(root->left);
	rnodes = countNodeswithTwoNodes(root->right);
	
	if(root->left != NULL && root->right != NULL){
		return lnodes + rnodes + 1;
	}else{
		return lnodes + rnodes;
	}
	
	return 0;
}

int countLeafNodes(struct node *root){
	int lnodes, rnodes;
	
	if(root == NULL){
		return 0;
	}
	
	lnodes = countLeafNodes(root->left);
	rnodes = countLeafNodes(root->right);
	
	if(root->left == NULL && root->right == NULL){
		return lnodes + rnodes + 1;
	}else{
		return lnodes + rnodes;
	}
}


/* all conditions

1. Number of Nodes with Degree 0 or Leaf Nodes
	if(root->left == NULL && root->right == NULL)

2. Nodes with Degree 2
	if(root->left != NULL && root->right != NULL)

3. Degree 1 or 2
	if(root->left || root->right)
	
4. Degree 1
	if((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
	or
	if(root->left != NULL ^ root->right != NULL)
	
*/
