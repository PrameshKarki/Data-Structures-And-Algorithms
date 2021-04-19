//Implementation of Binary tree in C++
#include<stdio.h>
#include<stdlib.h>
void preorder(struct node*);//Function for preorder traversal
void inorder(struct node*);//Function for inorder traversal
void postorder(struct node*);//Function for postorder traversal
//Node of Binary Tree
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
//Function for creating binary tree
struct node* create()
{
	int x;
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	printf("Enter The Value Which You Want To Insert?(Enter 0 For NULL Value):");
	scanf("%d",&x);
	if(x==0)
	{
		return 0;//return NULL;
	}
	newNode->data=x;
	printf("\t\tEnter Left Child Of %d\n",x);
	newNode->left=create();
	printf("\t\tEnter Right Child Of %d\n",x);
	newNode->right=create();
	return newNode;
}
//Main Function
int main()
{
	struct node* root;
	root=0;//root=NULL;
	root=create();
	printf("\n\n\nPreorder is:\n");
	preorder(root);
	printf("\nInorder is:\n");
	inorder(root);
	printf("\nPostorder is:\n");
	postorder(root);
	cout<<"\n\t\t@PRAMESH KARKI"<<endl;
        return 0;
}
//Function definition for preorder traversal
void preorder(struct node* root)
{
	if(root==0)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
//Function definition for postorder traversal
void inorder(struct node* root)
{
	if(root==0)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
//Function definition for postorder traversal
void postorder(struct node* root)
{
	if(root==0)
		return ;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
//This program is sucessfully compiled in Ubuntu 20.04
//Pramesh Karki
