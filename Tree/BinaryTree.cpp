//Creating binary tree at the compile time using C++
#include<iostream>
using namespace std;
class Node
{
	public:int Data;
	Node* leftChild;
	Node* rightChild;
};
Node* newNode(int insertedValue)
{
	Node *newNode=new Node;
	newNode->Data=insertedValue;
	newNode->leftChild=NULL;
	newNode->rightChild=NULL;
	return newNode;
}
int main()
{
	Node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(6);
	//You must call traversal function to check wheather it is working or not?
	cin.get();
	return 0;
}
