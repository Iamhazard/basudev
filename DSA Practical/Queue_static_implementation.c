#include<stdio.h>
#define N 5
struct queue{
	int front;
	int rear;
	int arr[N];
}qq;
void createQueue();
void enqueue(int);
void dequeue();
int isFull();
int isEmpty();
void traverse();
void main()
{
	createQueue();
	enqueue(10);
	enqueue(12);
	enqueue(30);
	traverse();
	enqueue(23);
	enqueue(5);
	enqueue(2);
	traverse();
	dequeue();
	dequeue();
	traverse();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	traverse();
	enqueue(15);
}
void traverse()
{
	int i;
	printf("Elements are: ");
	for(i=qq.front;i<=qq.rear;i++)
    	printf("%d ",qq.arr[i]);
    printf("\n");	
}
void createQueue()
{
	qq.front=0;
	qq.rear=-1;
	printf("Creation succeed!\n");
}
int isFull()
{
	if(qq.rear==N-1)  // Queue is full, overflow condition.
	  return 1;
	else
	  return 0;
}
int isEmpty()
{
	if(qq.front>qq.rear)
	  return 1;
	else
	 return 0;
}
void enqueue(int data)
{
	if(isFull()==1)
	  printf("Queue is full, Insertion failed!\n");
	else
	 { 
	 	++qq.rear;
	 	qq.arr[qq.rear]=data;
	 	printf("Insertion succeed! =%d\n",data);
	 }
}
void dequeue()
{
	if(isEmpty()==1)
	 printf("Queue is empty,Delation failed!\n");
	else
	{
		printf("Delation succeed! =%d\n",qq.arr[qq.front]);
		++qq.front;
	}
}

