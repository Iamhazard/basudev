#include<stdio.h>
#define N 4
struct cqueue
{
	int front;
	int rear;
	int arr[N];
}cqq;
void createQueue();
int isEmpty();
int isFull();
void traverse();
void enqueue(int);
void dequeue();
void main()
{
	createQueue();
	enqueue(5);
	enqueue(10);
	enqueue(15);
	enqueue(20);
	enqueue(25);
	traverse();
	dequeue();
	enqueue(25);
	enqueue(30);
	dequeue();
	enqueue(40);
	traverse();	
}
void createQueue()
{
	cqq.front=-1;
	cqq.rear=-1;
	printf("Initialization success.\n");
}
int isEmpty()
{
	if(cqq.rear==-1)
	  return 1;
	else
	  return 0;
}
int isFull()
{
	if((cqq.front==0 && cqq.rear==N-1)||(cqq.front==cqq.rear+1))
	   return 1;
	else
	   return 0;
}
void enqueue(int data)
{
	if(isFull())
		printf("Queue is full.Enqueue Failed\n");
	else
	{
		if(cqq.rear==-1)
		{ 
			++cqq.rear;
			++cqq.front;
			cqq.arr[cqq.rear]=data;
			printf("Enqueue success:%d\n",data);
		}
		else
		{
			cqq.rear=(cqq.rear+1)%N;
			cqq.arr[cqq.rear]=data;
			printf("Enqueue success:%d\n",data);
		}
	}
}
void dequeue()
{
	int data;
	if(isEmpty())
		printf("Queue is Empty,Dequeue Failed\n");
	else
	{
		if(cqq.front != cqq.rear)
		{
			data=cqq.arr[cqq.front];
			cqq.front=(cqq.front+1)%N;
			printf("Dequeue success:%d\n",data);	
		}
		else
		{
			data=cqq.arr[cqq.rear];
			cqq.front=-1;
			cqq.rear=-1;
			printf("Dequeue success:%d\n",data);	
		}
	}					
}           
void traverse()
{
	int i=cqq.front;
	while(i!=cqq.rear)
	{
		printf("%d ",cqq.arr[i]);
		i=(i+1)%N;
		printf("\n");
	}
	printf("%d ",cqq.arr[cqq.rear]);
	printf("\n"); 
}

