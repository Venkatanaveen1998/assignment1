#include<stdio.h>
#define s 5
int front=-1;
int rear=-1;
int q[s];                                          
void enque(int ele)                                 
{                                                                
	if(rear==s-1)
	{
		printf("queue is full:\n");
		return;
	}
	else if(rear==-1)
	{
	    front++;
	    rear++;
	    q[rear]=ele;
	}
	else
	{
	   rear++;
	   q[rear]=ele;
	}
}
void deque()
{
	if(front==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
	    printf("deleted ele is %c\n",q[front]);
	    front++;
	 if(front>rear)
	  front=rear=-1;
	}
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
	   for(int i=front;i<=rear;i++)
	  printf("%c\n",q[i]);
    }
}
int main()
{
	enque('a');
	enque('b');
	enque('c');
	display();
	deque();
	display();
}
