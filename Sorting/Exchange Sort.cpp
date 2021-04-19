/*
EXCHANGE SORT:
The exchange sort is almost similar as the bubble sort.In fact some people refer to the exchange sort as just a different bubble sort.
The exchange sort compares each element of an array and swap those elements that are not in their proper position,just like a bubble sort does.The only difference between two sorting algorithms is the manner in which they compare the elements.
The exchange sort compares the first element with each element of the array,making a swap where is necessary.In some situtions the exchange sort is slightly more efficient than its counter part the bubble sort.Thhe bubble sort needs a final pass to determine that it is finished,thus is slightly less efficient than the exchange sort,because the exchange sort doesnot need a final pass.
//Implementation of exchange sort in C++
SOURCE CODE: 
*/
#include<iostream>
#define MAX 100
using namespace std;
void printArray(int[],int);
void swap(int*,int*);
void exchangeSort(int[],int);
//Function for Exchange Sort
void exchangeSort(int array[MAX],int sizeOfArray)
{
    int i,j;
    for(int i=0;i<sizeOfArray-1;i++)
    {
         for(j=i+1;j<sizeOfArray;j++)
            {
                if(array[i]>array[j])
                    swap(array[i],array[j]);
                
            }
        
    }
}
//Function for Swapping Two Values
void swap(int* n1,int* n2)
{
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
//Function For Printing Array
void printArray(int array[],int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
            cout<<" "<<array[i];
}
//Main Function
int main()
{
    int i,array[MAX],sizeOfArray;
    cout<<"Enter the number of elements which you want to store:"<<endl;
    cout<<"HINT:Maximum 100 elements can be stored only."<<endl;
    cin>>sizeOfArray;
    cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
    for(i=0;i<sizeOfArray;i++)
         cin>>array[i];
    cout<<"Before Sorting:"<<endl;
    printArray(array,sizeOfArray);
    exchangeSort(array,sizeOfArray);
    cout<<"\nAfter Sorting:"<<endl;
    printArray(array,sizeOfArray);
    cout<<"\n\t\t@PRAMESH KARKI"<<endl;
    return 0;
}
//This program is sucessfully compiled in Ubuntu 20.04
//PRAMESH KARKI