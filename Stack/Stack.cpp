//Implemantation Of Stack Using C++
#include<iostream>
//#include<conio.h>
using namespace std;
int stack[100],n=100,top=-1;//Declaration Of Global Variables
void push(int var)
{
	if(top>=n-1)
		std::cout<<"Stack Is Overflow";
	else
	{
		top++;
		stack[top]=var;
	}
}
void pop()
{
	if(top<=-1)
		std::cout<<"Stack Is Underflow"<<endl;
	else
	{
		std::cout<<"The Poped Element Is:"<<stack[top]<<endl;
		top--;
	}
}
void display()
{

	 int i;
	if(top>=0)
	{
		std::cout<<"The Stack Elements Are As Follows:"<<endl;
		for(i=top;i>=0;i--)
			std::cout<<stack[i]<<endl;

	}
	else
		std::cout<<"Stack Is Empty"<<endl;

}
void makenull()
{
	top=-1;
	std::cout<<"  The Operation Is Sucessfull i.e Stack is Empty Now"<<endl;
}
void topelement()
{
	if(top>=0)
		std::cout<<"The Top Element Of Stack Is:"<<stack[top]<<endl;
	else
		std::cout<<"The Stack Is Empty i.e Underflow Condition"<<endl;
}
bool empty()
{
	if(top==-1)
		return true;
	else
		return false;
}
int main()
{
	int ch,var;
	std::cout<<"[1] Push Value In Stack"<<endl;
	std::cout<<"[2] Pop Value From Stack"<<endl;
	std::cout<<"[3] Display Stack"<<endl;
	std::cout<<"[4] MakeNull Stack"<<endl;
	std::cout<<"[5] Top Element Of Stack"<<endl;
	std::cout<<"[6] Check Stack Is Empty Or Not?"<<endl;
	std::cout<<"[7] Exit"<<endl;
	do
	{
		std::cout<<"Enter Your Choice?"<<endl;
		cin>>ch;
		switch(ch){
			case 1:std::cout<<"Enter Value To Be Pushed:"<<endl;
			      cin>>var;
			      push(var);
			      break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4:makenull();
			       break;
			case 5:topelement();
			       break;
			case 6:if(empty()==true)
			       std::cout<<"Stack is Empty"<<endl;
			       else
			       	std::cout<<"Stack isn't Empty"<<endl;
			       break;
			case 7:std::cout<<"  Thank You!!!    "<<endl;
			       break;
			 default:std::cout<<"Invalid Choice!!!"<<endl<<"Plese Enter Valid Choice"<<endl;
			}
		}
			while(ch!=7);
			//getch();
			return 0;
}
