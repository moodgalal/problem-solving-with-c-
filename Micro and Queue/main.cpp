#include <iostream>
#define size 100
using namespace std;
class queue
{
private:
    int Queue[size];
    int front ;
    int rear;

public:
    queue()
    {
      front = rear = -1;
    }
   bool isEmpty()
    {
      return (front == -1 && rear == -1);
    }
    bool isFull()
    {
        return ((rear+1)%size ==front ? true : false);
    }
    void enqueue(int x)
    {
      if(isEmpty())
        front = rear = 0;
      else
      {
          rear = (rear+1)%size;
      }
      Queue[rear] = x;
     cout<<queueSize()<<endl;
 }
    void dequeue()
    {
        if(isEmpty())
            {
                cout<<-1<<" "<<0<<endl;
            }
        else if(front == rear )
		{
            cout<<Queue[front]<<" ";
            rear = front = -1;
            cout<<0<<endl;
		}
        else
        {
            cout<<Queue[front]<<" ";

            Queue[front] = 0;
            front = (front+1)%size;
            cout<<queueSize()<<endl;
        }
    }
   int Front()
	{
		if(front == -1)
		{
			return -1;
		}
		return Queue[front];
	}
	int queueSize()
	{
	    int qsize = (rear+size-front)%size+1;
	    return qsize;
	}
};
int main()
{
    queue myQ;
    int t;
    cin>>t;
    while(t--)
    {
       char x;
       cin>>x;
       if(x == 'D')
       {
         myQ.dequeue();
       }
       else
       {
           int num;
           cin>>num;
           myQ.enqueue(num);
       }
    }
    return 0;
}



