/*
RADIX SORT:
Radix sort is a method that can used to sort a list of numbers by its base.It is also called as clever sort.
It uses the counting sort as a subroutine to sort.If the key is an integer,each position is a digit and has ten 
possibilities:0......9,If the key is a string of letters and case is not important,then each position has 26 possibilities:
"a"..."z".The number of possibilities is called radix.
To sort an array of decimal numbers,where the radix or base is 10,we need 10 buckets and can be numbered as 0,1,2,3,4,5,6,7,8,9.
Numbers of passes required to have a sorted array depends upon the number of digit in the largest element.
//Implementation of Radix Sort in C++
SOURCE CODE:
*/
#include<iostream>
#define MAX 100
using namespace std;
void printArray(int[],int);
int getMax(int[],int);
void arrayInitializer(int[],int);
void countSort(int[],int,int);
//Function for Radix Sort
void radixSort(int array[],int sizeOfArray)
{
    int max,pos; 
    max=getMax(array,sizeOfArray);
    for(pos=1;(max/pos)>0;pos*10)
    {
        countSort(array,sizeOfArray,pos);
    }
}
//Function for Count Sort because Radix sort use counter sort as it counter part for its sorting
void countSort(int array[MAX],int sizeOfArray,int pos)
{
    int countArray[10],i,tempArray[MAX];
    arrayInitializer(countArray,10);
    for(i=0;i<sizeOfArray;i++)
               ++countArray[(array[i]/pos)%10];
    for(i=1;i<10;i++)
         countArray[i]=countArray[i]+countArray[i-1];
    for(i=sizeOfArray;i>=0;i--)
             tempArray[--countArray[(array[i]/pos)%10]]=array[i];  
    for(i=0;i<sizeOfArray;i++)
       array[i]=tempArray[i];
}
//Function For Printing Array
void printArray(int array[MAX],int sizeOfArray)
    { 
        
         for(int i=0;i<sizeOfArray;i++)
          cout<<" "<<array[i];
    }
//Function that returns the maximum element from the given array    
int getMax(int array[MAX],int sizeOfArray)
{
    int maximumElement,i;
    maximumElement=array[0];
    for(i=0;i<sizeOfArray;i++)
      {
          if(maximumElement<array[i])
          maximumElement=array[i];
      }
      return maximumElement;
}
//Function that initialize all the element of the array to 0
void arrayInitializer(int array[MAX],int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
         array[i]=0;
}
//Main function
int main()
{
    int i,array[MAX],sizeOfArray;
    cout<<"Enter the number of elements which you want to store:"<<endl;
    cout<<"Hint:Maximum 100 elements can be stored only:"<<endl;
    cin>>sizeOfArray;
    cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
    for(i=0;i<sizeOfArray;i++)
     {
         cin>>array[i];
     }
    cout<<"Before Sorting:"<<endl;
    printArray(array,sizeOfArray);
    cout<<"\nAfter Sorting:"<<endl;
    radixSort(array,sizeOfArray);
    printArray(array,sizeOfArray);
    cout<<"\n\t\t@PRAMESH KARKI"<<endl;
    return 0;
}
//This program isnt sucessfully Compiled in Ubuntu 20.04
//PRAMESH KARKI