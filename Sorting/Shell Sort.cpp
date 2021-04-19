/*SHELL SORT:         
In this method,Array is divided into k subarrays consisting of every k elemnt and then sub-array contain kth element of the orginal array are sorted.
This algorithm avoids large shifts as in case of insertion sort,if the smaller value is to the far right and has to be moved to the far left.
This algorithm uses insertion sort on a widely spread elements,first to sort them and then sorts the less widely spaced elements.
This algorithm is quite efficient for medium-sized data sets as its average and worst case complexity are O(n),where n is the number of items.
SOURCE CODE:
*/
//Implementation of Shell Sort in C++
#include<iostream>
#include<conio.h>//Used for screen holding at the time of output.
using namespace std;
void  printArray(int arr[100],int sizeOfArray)//Function for printing array
{
	for(int i=0;i<sizeOfArray;i++)
		cout<<" "<<arr[i];
}
// Function for shell sort
void shellSort(int arr[100],int sizeOfArray)
{
	int i,j,k,step,temp;
	step=sizeOfArray/2;
	while(step!=0)
	{
		for(i=0;i<step;i++)
		{
			for(j=i+step;j<sizeOfArray;j+=step)
			{
				 temp=arr[j];
				for(k=j-step;k>=0 && arr[k]>temp;k-=step)
					arr[k+step]=arr[k];
			
			 arr[k+step]=temp;
          }
		}
		step=step/2;
	}

}
int main()//Main Function
{
	int i,arr[100],sizeOfArray;
	cout<<"Enter the number of elements which you want to store:"<<endl;
	cout<<"Hint:Maximum 100 data can be stored only."<<endl;
	cin>>sizeOfArray;
	cout<<"Enter "<<sizeOfArray<<" elements:"<<endl;
	for(i=0;i<sizeOfArray;i++)
      cin>>arr[i];
    cout<<"Before Sorting:"<<endl;
    printArray(arr,sizeOfArray);
   shellSort(arr,sizeOfArray);
   cout<<"\nAfter sorting:"<<endl;
   printArray(arr,sizeOfArray);
   cout<<"\n\t\t\t@PRAMESH KARKI"<<endl;
   getch();//Holds screen until any key is pressed
   return 0;

}
