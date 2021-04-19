//Implementation Of Stack Using LINKED LIST
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node * next;

};
struct Node* top=NULL;
void push(int val)
{
	struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=val;
	newnode->next=top;
	top=newnode;

}
void pop()
{
	if(top==NULL)
		cout<<"Stack UnderFlow."<<endl;
	else
	{
		cout<<"The Poped Element is:"<<top->data<<endl;
		top=top->next;
	}
}
void display()
{
	struct Node* ptr;
	if(top==NULL)
		cout<<"Stack Is empty"<<endl;
	else
	{
		ptr=top;
	    cout<<"Stack Elements are:"<<endl;
	    while(ptr!=NULL)
	    {
	    	cout<<ptr->data<<" ";
	    	ptr=ptr->next;
	    }
	}
	cout<<endl;
}
int main()
{
	int ch,val;
	do{
	cout<<"-------------OPERATIONS-----------------------"<<endl;
	cout<<"[1] Push In Stack"<<endl;
	cout<<"[2] Pop From Stack"<<endl;
	cout<<"[3] Display Stack"<<endl;
	cout<<"[4] Exit"<<endl;
	cout<<"Which Operation Do You Want To Perform?"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"Enter Value To Be Pushed:"<<endl;
			       cin>>val;
			       push(val);
			       system("clear");
			       break;
			case 2:pop();
			       break;
			case 3:display();
			      break;
			case 4: system("clear");
			        cout<<"Thank You!!!"<<endl;
			        break;
			default:cout<<"Invlaid Choices!!!"<<endl;
		}
	}while(ch!=4);
	return 0;

}
//This Code Was Sucessfully Compiled In UBUNTU 19.10
//Pramesh Karki

