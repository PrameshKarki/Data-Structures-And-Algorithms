/*INSERTION SORT:
This is in place comparison-based algorithm.Here a sub-list is maintained which is always sorted.For Example,the lower part of an array
is maintained to be sorted.An element which is to be 'insert'ed in the sorted sub-list,has to find its appropriate place and then it was
to be inserted there.Hence the name,insertion sort.

The array is searched sequentially and unsorted items are moved and inserted into the sorted sub-list(in the same array.)This algorithm
is not suitable for large data sets as its average and worst case complexity are on O(n^2),where n is the number of items.
SOURCE CODE:
*/
//Implementation of Insertion sort in C++
#include<iostream>
#include<conio.h>//Used for the screen holdiing at the time of output.
using namespace std;
// Function for printing array
void printArray(int arr[],int sizeOfArray)
{
	for(int i=0;i<sizeOfArray;i++)
		cout<<" "<<arr[i];
}
void insertionSort(int arr[],int sizeOfArray)
{
	int i,j,key;
	for(i=1;i<sizeOfArray;i++)
	{
		key=arr[i];//key is to be inserted at proper position
		for(j=i-1;j>=0 && key<arr[j];j--)
			arr[j+1]=arr[j];
		arr[j+1]=key;
	}

}
int main()//Main Function
{
	int i,arr[100],sizeOfArray;
	cout<<"Enter the number of elements which you want to insert:"<<endl;
	cout<<"Hint:Maximum 100 Data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		cin>>arr[i];
	cout<<"Before Sorting:"<<endl;
	printArray(arr,sizeOfArray);
	insertionSort(arr,sizeOfArray);
	cout<<"\nAfter sorting:"<<endl;
	printArray(arr,sizeOfArray);
    cout<<"\n\t\t\t@PRAMESH KARKI"<<endl;
	getch();//Holds screen at the time of output untill any key is pressed.
	return 0;
}
