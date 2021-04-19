/*MERGE SORT:
Like quicksort,Merge sort is a divide and conquer algorithm.It divides input array into twp halves,
calls itself for the two halves and merge and then merges the two sorted halves.The merge() function is
used for merging two halves.The merge (arr,l,m,r)is the key process that assumes that arr[l..m] and
arr[m+1...r] are sorted and merges the two sorted sub-arrays into one which is our required sorted array.
Implentation of merge sort in C++:
SOURCE CODE:
*/
#include<iostream>
void merge(int[],int,int,int);
void printArray(int[],int,int);
using namespace std;
//Function that partitioned the given array until single element exist in all subarrays recursively and call function merge() for merging.
void mergeSort(int array[100],int lowerBound,int upperBound){
	int midTerm;
	if(lowerBound!=upperBound)
	{
     midTerm=(lowerBound+upperBound)/2;
     mergeSort(array,lowerBound,midTerm);
     mergeSort(array,midTerm+1,upperBound);
     merge(array,lowerBound,midTerm,upperBound);//Calling function for merging
	}
}
//Function for merging two sorted sub array
void merge(int array[100],int lowerBound,int midTerm,int upperBound)
{
	int tempArray[100],i,j,k;
	i=lowerBound;
	j=midTerm+1;
	k=lowerBound;
	while(i<=midTerm && j<=upperBound)
	{
		if(array[i]<=array[j])
		{
			tempArray[k++]=array[i++];
			
		}
		else
		{
			tempArray[k++]=array[j++];
			
		}
		
	}
	while(i<=midTerm)
	{
		tempArray[k++]=array[i++];
	}
    while(j<=upperBound)
	{
		tempArray[k++]=array[j++];
	}
	for(i=lowerBound;i<=upperBound;i++)//For copying tempArray[] into array[]
		array[i]=tempArray[i];


}
// Function for printing array
void printArray(int array[100],int lowerBound,int upperBound)
{
	for(int i=lowerBound;i<upperBound;i++)
		cout<<" "<<array[i];

}
// Main Function
int main()
{
	int i,sizeOfArray,array[100];
	cout<<"Enter the number of elements which you want to store:"<<endl;
	cout<<"HINT:Maximum 100 data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		cin>>array[i];
	cout<<"Before Sorting:"<<endl;
	printArray(array,0,sizeOfArray);
	mergeSort(array,0,sizeOfArray-1);
	cout<<"\nAfter Sorting:"<<endl;
	printArray(array,0,sizeOfArray);
	cout<<"\n\t\t\t@PRAMESH KARKI"<<endl;
	return 0;
}
//This program is sucessfully compiled in Ubuntu 20.04
//PRAMESH KARKI

