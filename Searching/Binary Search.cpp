//Implementation Of Binary Search In C++
#include<iostream>
#include<conio.h>//Used for the screenholding at the time of output.
using namespace std;
void binarySearch(int[],int);
int main()
{
	int i,j,sizeOfArray,array[100],temp;
	cout<<"Enter the number of elements which you want to store:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
		cin>>array[i];
	//Then we have to sort the element if the elements in the array isnt sorted one.
	//Here we are using bubble sort
	for(i=0;i<sizeOfArray-1;i++)
	{
		for(j=0;j<sizeOfArray-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	binarySearch(array,sizeOfArray);
	getch();
	return 0;
}
void binarySearch(int array[100],int sizeOfArray)
{
	int min,max,mid,searchElement;
	min=0;
	max=sizeOfArray-1;
	mid=(int)(min+max)/2;
	cout<<"Enter The Element Which You Want To Search?";
	cin>>searchElement;
	while(((max>=min) && (array[mid]!=searchElement))&& ((array[max]>=searchElement) && (array[min]<=searchElement)))
	{
		if(searchElement>array[mid])
		{
			min=mid+1;
		}
		else
			max=mid-1;
		mid=(min+max)/2;
	}
	if(searchElement==array[mid])
	{
		cout<<searchElement<<" is found at position "<<mid+1<<endl;
	}
	else 
		cout<<searchElement<<" isnt found in array"<<endl;
    
	
}
//This program is sucessfully compiled in Windows 10
//Pramesh karki

