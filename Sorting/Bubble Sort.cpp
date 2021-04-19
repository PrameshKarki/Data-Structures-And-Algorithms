//Implementation Of Bubble Sort In C++
#include<iostream>
#include<conio.h>//Used for the screen holding at the time of output
using namespace std;
//Swap Function
void swap(int* n1,int* n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;

}
//A function for implement Bubble Sort
void BubbleSort(int array[],int sizeOfArray)
{
	int i,j,temp;
	for(i=0;i<sizeOfArray-1;i++)
	{
		//Last i elements are already in place
		for(j=0;j<sizeOfArray-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				swap(&array[j],&array[j+1]);
			}
		}
	}

}
void printArray(int array[],int sizeOfArray)//Prints Array
{
	for(int i=0;i<sizeOfArray;i++)
	{
		cout<<" "<<array[i];
	}
}
int main()//Main Function
{
	int array[100],sizeOfArray,i;
	cout<<"Enter the number of element which you want to store:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
	     cin>>array[i];
	cout<<"Before Sorting:"<<endl;
	printArray(array,sizeOfArray);
	BubbleSort(array,sizeOfArray);
	cout<<"\nAfter Sorting:"<<endl;
     printArray(array,sizeOfArray);
     cout<<"\n\t\t@PRAMESH KARKI"<<endl;
	getch();
	return 0;

}
//This Code is sucessfully compiled in Windows 10
//Pramesh Karki
