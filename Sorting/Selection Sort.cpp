/*SELECTION SORT:
1>Selection sort is the simple sorting algorithm.This sorting algorithm is an in-place comparison based algorithm in which the list is
divided into two parts,the sorted part at the left end and the unsorted part at the right end,which are divided by two imaginary wall.

2>Initially the sorted part is empty and the unsorted part is the entire list.

3>The smallest element is selected from the unsorted sub list and swap it with the element at the beginning of the unsorted data.

4>After each selection and sorting,the imaginary wall between the two sub lists move one element ahead,increasing the number of sorted elements
and decreasing the number of unsorted ones.

5>Each time we move one element from the unsorted sub list to the sorted sub list,we say that we have completed a sort pass.

6>A list of n elements requires n-1 passes to completely rearrange the data.

7>This algorithm is not suitable for large data sets as its average and worst case complexities are on O(n^2),where n is the number of item.
*/
//Implementation of Selection Sort in C++
#include<iostream>
#include<conio.h>//used for screen holding at the time of outout
using namespace std;
void swap(int* n1,int* n2)//Function used for swapping of two elements
{
	int temp;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
}
void printArray(int array[100],int sizeOfArray)//Function used for printing array
{
	for(int i=0;i<sizeOfArray;i++)
		cout<<" "<<array[i];
}
void selectionSort(int array[100],int sizeOfArray)//Function used for Selection Sort
{
	int i,j,minIndex;
	for(i=0;i<sizeOfArray-1;i++)
	{
		minIndex=i;
		for(j=i+1;j<sizeOfArray;j++)
		{
			if(array[j]<array[minIndex])
				minIndex=j;
		}
		swap(&array[i],&array[minIndex]);
	}

}
int main()
{
	int i,sizeOfArray,array[100];
	cout<<"Enter the number of element which you want to store:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		cin>>array[i];
	cout<<"Before Sorting:"<<endl;
	printArray(array,sizeOfArray);
	selectionSort(array,sizeOfArray);
	cout<<"\nAfter Sorting:"<<endl;
	printArray(array,sizeOfArray);
	cout<<"\n\t\t@PRAMESH KARKI"<<endl;
	getch();//Screen Holds at the time of output until any key is pressed.
	return 0;

}
//This program is sucessfully compiled in Windows 10
//Pramesh Karki
