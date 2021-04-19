//Implementaion of binary tree in C++
#include<iostream>
#include<cstdlib>
using namespace std;
class Node//Node Structure
{ 
  public:
    int data;
    Node* left;//Pointer to the left child
    Node* right;//Pointer to the right child
};
//Functions declarations
void preorderTraversal(Node*);//Function for preorder traversal
void inorderTraversal(Node*);//Function for inorder traversal
void postorderTraversal(Node*);//Function for postorder traversal
void insert(Node*,int);//Function for insering a value in BST
void search(Node*,int);//Function for searching data items in BST
//Function for creating binary tree
Node* create()
{  
    int value;
    Node* newNode=new Node;//Dyanamic allocation of node
    cout<<"\nEnter the value which you want to insert:"<<endl;
    cout<<"NOTE:Enter 0 for NULL Value:"<<endl;
    cin>>value;
    if(value==0)
      {
          return 0;
      } 
    newNode->data=value;
    cout<<"\n\nEnter the left child of "<<value<<" :"<<endl;
    newNode->left=create();
    cout<<"Enter the right child of "<<value<<" :"<<endl;
    newNode->right=create();
    return newNode;
}
//Main Function
int main()
{
    int insertedValue,searchedItem;
    Node* ROOT;
    ROOT=0;
    cout<<"\t\tCREATION OF BINARY TREE:"<<endl;
    ROOT=create();
    cout<<"\nEnter the value which you want to insert in BST:"<<endl;
    cin>>insertedValue;
    insert(ROOT,insertedValue);
    cout<<"\nPreorder traversal of this tree:"<<endl;
    preorderTraversal(ROOT);
    cout<<"\nInorder traversal of this tree:"<<endl;
    inorderTraversal(ROOT);
    cout<<"\nPostorder traversal of the tree:"<<endl;
    postorderTraversal(ROOT);
    cout<<"\nEnter the value which you want to search:"<<endl;
    cin>>searchedItem;
    search(ROOT,searchedItem);
    cout<<"\n\t\t@PRAMESH KARKI"<<endl;
    return 0;
}
//Functions definitions
void preorderTraversal(Node* ROOT)
{
    if(ROOT==0)
        return;
    cout<<ROOT->data<<" ";
    preorderTraversal(ROOT->left);
    preorderTraversal(ROOT->right);
}
void inorderTraversal(Node* ROOT)
{
    if(ROOT==0)
       return;
    inorderTraversal(ROOT->left);
    cout<<ROOT->data<<" ";
    inorderTraversal(ROOT->right);
}
void postorderTraversal(Node* ROOT)
{
    if(ROOT==0)
        return;
    postorderTraversal(ROOT->left);
    postorderTraversal(ROOT->right);
    cout<<ROOT->data<<" ";
}
//Function definition for insertion
void insert(Node* ROOT,int insertedValue)
{
    Node* newNode=new Node;//Dynamic allocation of new inserted node
    Node* temp;//Temprorary Node
    newNode->data=insertedValue;//Value assigned to the new node
    if(ROOT==0)
    {
        ROOT=newNode;
    }
    else
    {
        temp=ROOT;
        while(1)
        {
            if(insertedValue<temp->data)
            {
                if(temp->left!=0)
                  temp=temp->left;
                  else
                  {
                      temp->left=newNode;
                      return;
                  }
                  
            }
            else if(insertedValue>temp->data)
            {
                if(temp->right!=0)
                temp=temp->right;
             else
            {
                temp->right=newNode;
                return;
            }
            }
         else
         {
             cout<<"Duplicate Value!!!"<<endl;
             cout<<"NOTE:In BST all values are unique"<<endl;
             return;
         
         }
    }}
         
}
//Function for searching
//This function has some error.I will fix it as soon as possible. 
void search(Node* ROOT,int searchedItem)
{

    Node* temp;//Temprorary Node
    temp=ROOT;
    while(temp->data!=searchedItem)
    {
        if(searchedItem==temp->data)
        {
            cout<<"Data found in tree"<<endl;
            cin.get();
            return;
        }
        if(temp==NULL)
        {
            cout<<"Data not found in tree"<<endl;
            cin.get();
            return;
        }
        if(searchedItem>temp->data)
                 temp=temp->right;
        else if(searchedItem<temp->data)
                temp=temp->left;
            
         
    }
}

//This program is sucessfully compiled in Ubuntu20.04
//Pramesh Karki

