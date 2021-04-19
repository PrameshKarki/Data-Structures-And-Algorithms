//Template of creation of binary tree
#include<stdio.h>
struct node
{
	int data;
	struct node* left,right;
};
struct node* create()
{
	int x;
	struct node* newNode;
	newNode=(struct node*)malloc(sizeof(struct node))
	printf("Enter The Value Which You Want To Insert?(Enter -1 For NULL Value)");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;//return NULL;
	}
	newNode->data=x;
	printf("Enter Left Child Of %d",x);
	newNode->left=create();
	printf("Enter Right Child Of %d",x);
	newNode->right=create();
	return newNode;
}
int main()
{
	struct node* root;
	root=0;//root=NULL;
	root=create();
	//You must call traversal function to check wheather it is working or not?
	return 0;
}
