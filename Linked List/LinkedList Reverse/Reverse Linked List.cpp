#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<ctime>
time_t my_time = time(NULL);
void push(int);
void traverseStack();
using namespace std;
class Node
{
	public:int data;
	Node *next;
};
Node *top=NULL;
void insert(Node **head,int newData)//Insert New Element at the end of the linked list like a array
{
	Node *newNode=new Node;
	Node *last=*head;
	newNode->data=newData;
	newNode->next=NULL;
	if(*head==NULL)
	{
		*head=newNode;
		return;
	}
	while(last->next!=NULL)
		  last=last->next;
	last->next=newNode;
	return;
}
void display(Node **head)
{
	ofstream fout;
	fout.open("ReverseLinkedListLOG.txt",ios::binary|ios::app);
	fout<<"\n\n"<<ctime(&my_time)<<endl;
	fout<<"The Given Value Are As Follows:"<<endl;
	Node *temp;
	temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		fout<<temp->data<<" ";
		push(temp->data);
		temp=temp->next;

	}
	fout.close();
	traverseStack();
}
void push(int pushedValue)//push in stack
{
	Node *newNode=new Node;
	newNode->data=pushedValue;
    newNode->next=top;
	top=newNode;
}
/*void pop()
{
	if(top==NULL)
		cout<<"The Stack Is Empty!!!"<<endl;
	else
	{
		cout<<"The Poped Element Is:"<<top->data<<endl;
		top=top->next;
	}
}
*/
void traverseStack()
{
	Node *ptr;
	ofstream fout;
	fout.open("ReverseLinkedListLOG.txt",ios::binary|ios::app);
	if(top==NULL)
	{
		cout<<"\nNo Any Value Pushed Into The Stack!!!"<<endl;
	    fout<<"\nNo Any Value Pushed Into The Stack!!!"<<endl;
    }
	else
	{
	ptr=top;
	cout<<"\nThe Reversed Linked List Is As Follows:"<<endl;
	fout<<"\nThe Reversed Linked List Is As Follows:"<<endl;
	while(ptr!=NULL)
	{
    cout<<ptr->data<<" ";
    fout<<ptr->data<<" ";
    ptr=ptr->next;
	}
	}
fout.close();
}
void history()
{
ifstream fin;
fin.open("ReverseLinkedListLOG.txt");
char str[80];
while(!fin.eof())
{
fin.getline(str,80);
cout<<str<<endl;
}
fin.close();
return ;

}
int main()
{
	int num,value,i;
	char ch;
	Node *head=NULL;
	cout<<system("figlet -f slant 'PRAMESH'|lolcat -a -d 30")<<endl<<endl;
	cout<<"Enter How Many Data Do You Want To Store?"<<endl;
	cout<<system("espeak 'Enter How Many Data Do You Want To Store?'");
	cin>>num;
	cout<<"Enter "<<num<<" Data:"<<endl;
	for(i=1;i<=num;i++)
	{
		cin>>value;
		insert(&head,value);
	}
	cout<<"\n\nThe Given Value Are As Follows:"<<endl;
	display(&head);
	A:
	cout<<"\n\n\n\n\t\tDo You Want To Close This Program?"<<endl;
	cout<<"\tEnter 'Y' For CLose and 'H' For Program Log"<<endl;
	cin>>ch;
	if(ch=='y' || ch=='Y')
		exit(0);
    else if(ch=='h' || ch=='H')
		history();
    else
	{
		cout<<"Invalid Choioces!!!"<<endl;
		goto A;
	}
    return 0;

}
