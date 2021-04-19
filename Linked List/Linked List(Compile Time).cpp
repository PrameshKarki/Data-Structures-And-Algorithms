//INSERTION OF DIFFERENT ELEMENT IN DIFFERENT POSITION OF LINKED LIST DURING COMPILE TIME.
#include<iostream>
//include<conio.h>
#include<stdlib.h>
using namespace std;
class Node
{
	public:int data;
	       Node *next;
};
/*Given a refrence(Pointer to Pointer)to the head of a list and an int,inserts a new node on the front of the list.*/
void push(Node** head,int newData)
{
	Node* newNode=new Node;//allocate node
	newNode->data=newData;
	newNode->next=(*head);
    (*head)=newNode;
}
/*Given a node prevNode,insert a new node after the given prevNode*/
void insertAfter(Node *prevNode,int newData)
{
	if(prevNode==NULL)
	{
		cout<<"The Given Previous Node Cannot Be Null"<<endl;
		return ;
	}
	Node * newNode=new Node;//allocate new Node
	newNode->data=newData;
	newNode->next=prevNode->next;
	prevNode->next=newNode;

}
/*Given a refrence(pointer to pointer) to the head of a list and an int ,appends a new node at the end*/
void append(Node** head,int newData)
{
	Node *newNode=new Node;
	Node *last=*head;//initialize last node as a head
	newNode->data=newData;
	newNode->next=NULL;//Next of node at the end will always be NULL
   if(*head==NULL)//i.e insertion of very first node
   {
   	*head=newNode;
   	return ;
   }
   while(last->next!=NULL)
   	last=last->next;
    last->next=newNode;
    return;
}
void traverseList(Node *node)
{
	while(node!=NULL)
	{
		cout<<" "<<node->data;
		node=node->next;
	}
	cout<<"  NULL";
}
int main()
{
	Node *head=NULL;//Initialise Empty list
	append(&head,17);//add new node at the end.linked list becomes as::17--NULL
	push(&head,77);//insert new node at the beginnig.the linked list the becomes as:77--17--NULL
	push(&head,11);//insert new node at the beginnig.the linked list the becomes as:11--77--17--NULL
	append(&head,99);//add new node at the end.linked list becomes as::11--77--17--99--NULL
	insertAfter(head->next,100);//Insertion after 77.Linked List Becomes as:11--77--100--17--99--NULL
        cout<<"The Created Linked List is as Follows:"<<endl;
	traverseList(head);
	return 0;
}
//This code was sucessfully compiled in Ubuntu 19.10
//Pramesh Karki
//2020-02-11 7:38 PM
