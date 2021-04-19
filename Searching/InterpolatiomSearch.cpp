//Implementation Of Interpolation Search In C++
#include<iostream>
#include<conio.h>//Used for screenholding at the time of output
using namespace std;
int interpolationSearch(int[],int);//Function Declaration for the interpolation search
int main()
{
	int sizeOfArray,array[100],temp,i,j,position;
	cout<<"Enter the number of element which you want to store in array:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored only"<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
	for (i = 0;i<sizeOfArray;i++)
	       cin>>array[i];
	   //Then we have to sort the elements if it isnot the sorted one.
	   //We are using bubble sort for the sorting
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
	position=interpolationSearch(array,sizeOfArray);
	if(position==-1)
		cout<<"The searched element doesnot exist in an array."<<endl;
	else
		cout<<"The searched element is at "<<position<<"th position."<<endl;
	 getch();
	return 0;
}
int interpolationSearch(int array[100],int sizeOfArray)//returns -1 if element doesnot exist otherwise returns it position
{
	int low,high,position,searchedElement;
	low=0;
	high=sizeOfArray-1;
	cout<<"Enter the value which you want to search:";
	cin>>searchedElement;
	while((low<=high) &&((searchedElement<=array[high]) &&(searchedElement>=array[low])))
	{
		position=low+((double)(high-low)*(searchedElement-array[low]))/(array[high]-array[low]);
		if(array[position]==searchedElement)
	       return position+1;
	   else if(array[position]<searchedElement)
	   	   low=position+1;
	   	else
	   		high=position-1;

	}
	return -1;
}
//This Program is Sucessfully Compiled in Windows 10
//Pramesh Karki
