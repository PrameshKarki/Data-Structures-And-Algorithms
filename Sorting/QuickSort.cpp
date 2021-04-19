/*QUICK SORT:
It is one of the widely used sorting techniques and it is also called partition exchange sort.Quick sort is an efficient algorithm and
it passes a very good time complexity in average case.It is an algorithm of the divide-conquers type.The quick sort algorithm works by
partitioning tha  array to be sorted.And each partition is internally sorted recursively.This key value can be the first element of an
array i.e if A is an array then key=A[0],and rest of elements are groupped into two partitions such that:
a>One partition contains elements smaller than key value.
b>Another partition contains element larger than key value.
Two pointers up and low,are initialized to the upper and lower bounds of the sub array.During execution,at any point each element in a position
below low pointer is less than or equal to the key.Up pointer will move in a decrement and low in increment fashion.
SOURCE CODE:
*/
//Implementation of Quick Sort in C++
#include<iostream>
#include<conio.h>//Used for screen holding at the time of output
using namespace std;
void swap(int* n1,int* n2)//Function for swapping
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
//Function for printing array
void printArray(int array[100],int sizeOfArray)
{
	for(int i=0;i<sizeOfArray;i++)
		cout<<" "<<array[i];
}
int partition(int array[100],int lowerBound,int upperBound)//Functions for partitioning given array
{
	int pivotElement,low,up;
	pivotElement=array[lowerBound];
	low=lowerBound+1;
	up=upperBound;
	while(low<=up)//while(low<up)
	{
		while(array[low]<=pivotElement)
			low++;
		while(array[up]>pivotElement)
			up--;
		if(low<up)
			swap(&array[low],&array[up]);
	}
	swap(&array[lowerBound],&array[up]);
	return up;
}
void quickSort(int array[100],int lowerBound,int upperBound)//Function for Quick Sort
{
	int location;
	if(lowerBound<upperBound)
	{
		location=partition(array,lowerBound,upperBound);
		quickSort(array,lowerBound,location-1);//Recursive Function Call
		quickSort(array,location+1,upperBound);

	}
	else 
	return;
}
int main()//Main Function
{
	int i,array[100],sizeOfArray;
	cout<<"Enter the number of elements which you want to store:"<<endl;
	cout<<"HINT:Maximum 100 data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
	      cin>>array[i];
	cout<<"Before Sorting:"<<endl;
	printArray(array,sizeOfArray);
	quickSort(array,0,sizeOfArray-1);
	cout<<"\nAfter Sorting:"<<endl;
    printArray(array,sizeOfArray);
    cout<<"\n\t\t\t@PRAMESH KARKI"<<endl;
    getch();//Holds screen at the time of output until any key is pressed
     return 0;
}
//This Program is Sucessfully Compiled in Windows 10
//PRAMESH KARKI
