//C++ Program To Implement Circular Queue
#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
class circularQueue
{
  private:int arr[100],size,front,rear;
    public:circularQueue()
    {
      for(int i=0;i<100;i++)
        arr[i]=0;
      front=-1;
      rear=-1;
    }
    void read()
    {
      cout<<"How many data do you want to store?(Hint:Maximum 100 data will be stored)"<<endl;
      cin>>size;
    }
    bool isEmpty()
    {
      if(front==-1 && rear==-1)
        return true;
      else
        return false;

    }
    bool isFull()
    {
      if((front==0 && rear==size-1) ||(front==rear+1))
        return true;
      else
        return false;
    }
    void enqueue(int value)
    {
       system("clear");
       if(isFull()==true)
        {
         cout<<"Queue is full so new element cannot be inserted."<<endl;
         return;
         }
      else if(isEmpty()==true)
         {
          front=0;
          rear=0;
          arr[rear]=value;
         }
      else
      {
        rear=(rear+1)%size;
        arr[rear]=value;
      }

    }
   void dequeue()
   {
   int deletedElement;
    if(isEmpty()==true)
    {
      cout<<"Queue is empty so dequeue operation isn't valid in this case."<<endl;
      return;
    }
    else if(front==rear)
    {
      deletedElement=arr[front];
      arr[front]=0;
      cout<<"Dequeued element is:"<<deletedElement<<endl;
      front=-1;
      rear=-1;
    }
    else
    {
        deletedElement=arr[front];
        arr[front]=0;
        cout<<"Dequeued element is:"<<deletedElement<<endl;
        front=(front+1)%size;
   }
}
void display()
{
  if(isEmpty()==true)
    {
      cout<<"Queue is empty so this operation isnot valid in empty queue."<<endl;
            return;
        }
  else if(front<=rear)
  {
    cout<<"The elements in a queue are:"<<endl;
    for(int i=front;i<=rear;i++)
      cout<<arr[i]<<" ";
      cout<<endl;

  }
  else
  {
    cout<<"The Elements in a queue are:"<<endl;
    for( int i=front;i<=size-1;i++)
      cout<<arr[i]<<" ";
    for(int i=0;i<=rear;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
  }
}
};
int main()
{
  circularQueue c;
  int option,value;
  c.read();
  system("clear");
  do{
  cout<<"------------------Enter Your Choice----------------------------------------"<<endl;
  cout<<"[1]Enqueue"<<endl;
  cout<<"[2]Dequeue"<<endl;
  cout<<"[3]Is Queue Empty?"<<endl;
  cout<<"[4]Is Queue Full?"<<endl;
  cout<<"[5]Display Queue Elements"<<endl;
  cout<<"[6]Exit"<<endl;
  cout<<"\n\n\n\n\nWhich Operation Do You Want To Perform?"<<endl;
  cin>>option;
  system("clear");
  switch(option)
  {
    case 0:break;
    case 1:cout<<"Enter Element to be enqueued:"<<endl;
           cin>>value;
           c.enqueue(value);
           break;
    case 2:c.dequeue();
           break;
    case 3:if(c.isEmpty()==true)
           cout<<"The queue is empty."<<endl;
           else
            cout<<"The queue is not empty."<<endl;
           break;
    case 4:if(c.isFull()==true)
           cout<<"The queue is full."<<endl;
           else
            cout<<"The queue is not full."<<endl;
           break;
    case 5:c.display();
           break;
    case 6:exit(0);
           break;
    default:cout<<"       INVALID CHOICES!!!   "<<endl<<"    Enter Your Choice Again"<<endl;
     }

}while(option!=0);
//getch();
return 0;
}
//This Code was Sucessfully Compiled In Ubuntu 19.10
//Pramesh Karki
