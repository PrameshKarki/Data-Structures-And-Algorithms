//Different Operations Performed In Linked List Using C++
#include<iostream>
#include<fstream>
//#include<conio.h>
#include<ctime>
#include<stdlib.h>
using namespace std;
time_t my_time = time(NULL);
class Node
{
	public:int data;
	       Node *next;
};
/*Given a refrence(Pointer to Pointer)to the head of a list and an int,inserts a new node on the front of the list.*/
void push(Node** head,int newData)
{
	Node* newNode=new Node;//Creation Of A New Node
	newNode->data=newData;
	newNode->next=(*head);
	(*head)=newNode;
}
/*Given a node prevNode,insert a new node after the given prevNode*/
void insertAfter(Node* prevNode,int newData)
{
	if(prevNode==NULL)
	{
		cout<<"The Given Previous Node Cannot Be NULL!!!"<<endl;
		return;
	}
	Node* newNode=new Node;
	newNode->data=newData;
	newNode->next=prevNode->next;
	prevNode->next=newNode;

}
/*Given a refrence(pointer to pointer) to the head of a list and an int ,appends a new node at the end*/
void append(Node** head,int newData)
{
	Node* newNode=new Node;
	Node* last=*head;//initialize last node as a head
	newNode->data=newData;
	newNode->next=NULL;//i.e insertion of node at the last.So NEXT Of the last is always NULL
	if(*head==NULL)
	{
		*head=newNode;
	}
	while(last->next!=NULL)
		last=last->next;
	last->next=newNode;
    return;
}
void insertPosition(Node** head,int newData,int position)
{
	Node* tempNode;
	int i;
	tempNode=(*head);
	//Finding the Position to add new element to the linked list
	for(int i=1;i<position-1;i++)
	{
     tempNode=tempNode->next;
     if(tempNode==NULL)
     {
     	cout<<"There are less than "<<position<<" elements."<<endl;
     	return;
     }

	}
	Node* newNode=new Node;
	newNode->data=newData;
	newNode->next=tempNode->next;
	tempNode->next=newNode;
	 cout<<"\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
}
void traverseList(Node *node)
{
	ofstream fout;
	fout.open("HistoryLinkedList.dat",ios::binary|ios::app);
	fout<<"\n\n"<<ctime(&my_time)<<endl;
	fout<<"\n         The Linked List Is As Follows:"<<endl;
	fout<<"\n";
	cout<<"\n\n\n          The Linked List Is As Follows:"<<endl;
	cout<<"\n\n\n";
	while(node!=NULL)
	{
     cout<<" "<<node->data<<"--";
     fout<<" "<<node->data<<"--";
     node=node->next;
	}
	cout<<" NULL";
	fout<<"NULL"<<endl;
	fout.close();
}
void deleteNode(Node **head, int deleteValue)
{
Node* tempNode,*prevNode;
tempNode=*head;
if (tempNode != NULL && tempNode->data ==deleteValue)
    {
        *head= tempNode->next;
         free(tempNode);
         cout<<"\n\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
        return;
    }

    // Search for the key to be deleted
    // previous node as we need to change 'prev->next'
    while (tempNode != NULL && tempNode->data !=deleteValue)
    {
        prevNode=tempNode;
        tempNode=tempNode->next;
    }
   // If the deleteValue was not present in linked list
    if (tempNode== NULL)
    {
    cout<<"The Element "<<deleteValue<<" is Not Found"<<endl;
    return;
    }
    // Unlink the node from linked list
    prevNode->next = tempNode->next;
    cout<<"\n\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
    free(tempNode);  // Free memory
}
void history()
{
ifstream fin;
fin.open("HistoryLinkedList.dat");
char str[80];
while(!fin.eof())
{
fin.getline(str,80);
cout<<str<<endl;
}
fin.close();
return ;
}
void aboutMe()
{
ifstream fin;
fin.open("aboutMe.txt");
char str[80];
while(!fin.eof())
{
fin.getline(str,80);
cout<<str<<endl;
}
fin.close();
return ;
}
int search(Node** head,int searchElement)//function to search an element from the linked list
{
int position=1;
Node* tempNode;
tempNode=*head;
while(tempNode!=NULL)
{
    if(tempNode->data==searchElement)
	{
	return position;
	}
	tempNode=tempNode->next;
	position++;

}

     if(tempNode==NULL)
	cout<<"\n\n\t\tElement "<<searchElement<<" not Found in List"<<endl;
}
int main()
{
	Node*head=NULL;//Initialization of empty linked list
	int choice,newData,position,deleteElement,searchElement;
	while(1)
	{
		cout<<"         Enter Your Choices?"<<endl;
		cout<<"============================================"<<endl;
		cout<<"[1]Insert Element At The Beginning"<<endl;
		cout<<"[2]Insert Element At The End"<<endl;
		cout<<"[3]Insert Element At The Specified Position"<<endl;
		cout<<"[4]Insert Element After The Specified Element"<<endl;
		cout<<"[5]Delete Element"<<endl;
		cout<<"[6]Search Element"<<endl;
		cout<<"[7]Traverse The LinkedList"<<endl;
		cout<<"[8]History"<<endl;
		cout<<"[9]Contact Us"<<endl;
		cout<<"[10]Exit"<<endl;
		cout<<"\n\n\n\tWhich Operation Do You Want To Perform?";
		cin>>choice;
		switch(choice)
		{
		case 1:cout<<"\n\nEnter The New Element:";
		       cin>>newData;
		       push(&head,newData);
		       cout<<"\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
		       cout<<"\n\n\n";
		       break;
		case 2:cout<<"\n\nEnter The New Element:";
		       cin>>newData;
		       append(&head,newData);
		       cout<<"\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
		       cout<<"\n\n\n";
		       break;
		case 3:cout<<"\n\nEnter The New Element:";
		       cin>>newData;
		       cout<<"\n\nEnter The Postion Where You Want To Insert Element?";
		       cin>>position;
		       if(position==0 || position==1)
		       push(&head,newData);
		       else
		       insertPosition(&head,newData,position);
               cout<<"\n\n\n";
		       break;
		case 4:cout<<"\n\nEnter The Element:";
		       cin>>newData;
		       cout<<"Enter The Element After Which You Want To Add Elements?";
		       cin>>searchElement;
               position=search(&head,searchElement);
               insertPosition(&head,newData,position+1);
               break;
		case 5:cout<<"Enter The Element Which You Want To Delete?";
		       cin>>deleteElement;
		       deleteNode(&head,deleteElement);
		       break;
		case 6:cout<<"Enter The Element To Search?";
		       cin>>searchElement;
		       cout<<"\n\nElement "<<searchElement<<" Found At Position:"<<search(&head,searchElement)<<endl;
               break;
        case 7:traverseList(head);
                cout<<"\n\n\t\t\tThe Operation Is Sucessfull."<<endl;
		        cout<<"\n\n\n";
                break;
        case 8:history();
		        break;
		case 9:cout<<"\n\n\n";
		       aboutMe();
		        break;
		case 10:cout<<"\n\n\n\t\t\tTHANK YOU!!!!"<<endl;
		       exit(0);
		default:cout<<"\n\n\n\t\t\t\aInvalid Choice!!!"<<endl;
       }
       }
        return 0;
    }









