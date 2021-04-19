/*COUNT SORT:
Counting sort is a technique based on keys between specific range.It works by counting the number of objects having distinct key values(kind of Hashing).Then doing some arithmetic to calculate the position of each object in the output sequence.
//Implementation of Count Sort in C++:
SOURCE CODE:
*/
#include<iostream>
#define MAX 100
using namespace std;
void printArray(int[],int);
void arrayInitializer(int [],int);
int getMax(int[],int);
//Function for count sort
void countSort(int array[MAX],int sizeOfArray,int key)
{
  int countArray[key+1],i,tempArray[MAX];
  arrayInitializer(countArray,key+1);
  for(i=0;i<sizeOfArray;i++)
        ++countArray[array[i]];
  for(i=1;i<=key;i++)
         countArray[i]=countArray[i]+countArray[i-1];
  for(i=sizeOfArray-1;i>=0;i--)
         tempArray[--countArray[array[i]]]=array[i];
  for(i=0;i<sizeOfArray;i++)
     array[i]=tempArray[i];
       
}
//Function for printing array
void printArray(int array[MAX],int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
         cout<<" "<<array[i];
    
}
//Function for array initializer
void arrayInitializer(int array[MAX],int sizeOfArray)
{
    for(int i=0;i<sizeOfArray;i++)
          array[i]=0;
}
//Function for finding highest element in the array
int getMax(int array[MAX],int sizeOfArray)
{
    int maxNumber;
    maxNumber=array[0];
    for(int i=0;i<sizeOfArray;i++)
    {
     if(array[i]>maxNumber)
           maxNumber=array[i];
    }
    return maxNumber;
}
//Main Function
int main()
{
    int array[MAX],sizeOfArray,i,key;
    cout<<"Enter the number of elements which you want to store:"<<endl;
    cout<<"Hint:Maximum 100 elements can be stored only."<<endl;
    cin>>sizeOfArray;
    cout<<"Enter "<<sizeOfArray<<" Elements:"<<endl;
    for(i=0;i<sizeOfArray;i++)
         cin>>array[i];
    cout<<"Before Sorting:"<<endl;
    printArray(array,sizeOfArray);
    key=getMax(array,sizeOfArray);
    countSort(array,sizeOfArray,key);
    cout<<"\nAfter Sorting:"<<endl;
    printArray(array,sizeOfArray);
    cout<<"\n\t\t\t@PRAMESH KARKI"<<endl;
    return 0;
}
//This program is sucessfully compiled in ubuntu 20.04
//PRAMESH KARKI