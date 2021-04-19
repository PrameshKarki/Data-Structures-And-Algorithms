/*PRODUCT OF THE NODES OF A SINGLY LINKED LIST
Given a singly linked list.The task is to find the product of all of the nodes of the given linked list.
Input:List=7->6->8->4->1
Output:Product=1344
Product of nodes:7*6*8*4*2*1
Input:List:1->7->3->9->11->5
Output:Product=10395
*/
//C++ implementation to find the product of the nodes of the linked list
#include<iostream>
using namespace std;
//A linked list node
struct Node{
    int data;
    struct Node *next;
    };
//Function to insert node at the beginning of the linked list
void push(struct Node** head,int newData)
{
    struct Node* newNode=new Node;//Allocation of new node
    newNode->data=newData;//Put in the data
    newNode->next=(*head);//Link the old list to the new node
    (*head)=newNode;//Move the head to point to the new node
} 
//Function to find the product of nodes of the given linked list
int productOfNodes(struct Node* head)
{
    struct Node* ptr;
    int product;
    product=1;//Var to store the product
    while(ptr!=NULL)
    {
        product*=ptr->data;
        ptr=ptr->next;
    }
    return product;

}
//Main Function
int main()
{
    struct Node* head=NULL;
    push(&head,7);
    push(&head,6);
    push(&head,8);
    push(&head,4);
    push(&head,1);
    cout<<"Product Of Nodes:"<<productOfNodes(head)<<endl;
    cout<<"\n\t\t@PRAMESH KARKI"<<endl;
    return 0;
}
//This program is sucessfully compiled in Ubuntu 20.04
//PRAMESH KARKI
