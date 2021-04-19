//Implementation Of Recursive Bubble Sort
//Bubble sort is the simplest sorting algorithm that works by repeatedly swapping adjacent elements if they are in wrong order.
#include<iostream>
#include<conio.h>//Used for the screen holding at the time of output
using namespace std;
void swap(int* n1,int* n2)
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void bubbleSort(int array[100],int sizeOfArray)
{
	if(sizeOfArray==1)//Termination Condition For Recurssion
		return;
 for(int i=0;i<sizeOfArray-1;i++)
 	if(array[i]>array[i+1])
 		swap(&array[i],&array[i+1]);
 	bubbleSort(array,sizeOfArray-1);
} 
void printArray(int array[100],int sizeOfArray)//Function Prints an Array
{
	for(int i=0;i<sizeOfArray;i++)
		cout<<" "<<array[i];
}
int main()
{
	int i,array[100],sizeOfArray;
	cout<<"Enter how many element do you want to store:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		cin>>array[i];
	cout<<"Before Sorting:"<<endl;
	printArray(array,sizeOfArray);
	bubbleSort(array,sizeOfArray);
	cout<<"\nAfter Sorting:"<<endl;
	printArray(array,sizeOfArray);
	cout<<"\n\t\t@PRAMESH KARKI"<<endl;
	getch();
	return 0;

}
//This program is sucessfully compiled in Windows 10
//PRAMESH KARKI
