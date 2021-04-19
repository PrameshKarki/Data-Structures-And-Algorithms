//Implementation of Linear Search In C++
#include<iostream>
#include<conio.h>//Used for the screenholding at the time of output
using namespace std;
void linearSearch(int[],int);
int main()
{
	int i,sizeOfArray,array[100];
	cout<<"Enter number of elements which you want to store?"<<endl;
	cout<<"Note:Maximum 100 Data Can Be Stored Only!!!"<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		{
		    cin>>array[i];
		}
	linearSearch(array,sizeOfArray);
	getch();
	return 0;
}
void linearSearch(int array[100],int sizeOfArray)
{
	int i,flag=0,searchElement;
	cout<<"Enter The Element Which You Want To Search: ";
	cin>>searchElement;
	for(i=0;i<sizeOfArray;i++)
	{
		if(array[i]==searchElement)
		{
			flag=1;
			cout<<"Search is sucessFull"<<endl;
			cout<<"The Elment is at "<<i+1<<" position"<<endl;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Search is unsucessfull!!! "<<endl<<searchElement<<" Doesnot Found in Array."<<endl;

	}
	return;
}
//This Program is Sucessfully Compiled In Windows 10
//Pramesh Karki

