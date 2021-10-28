#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node * next;
};
struct node * head;
void enqueue(int data)
{
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	if(head==NULL)
	{
		head=newNode;
	}
	else 
	{
		struct node * temp=head;
	    while(temp->next!=NULL)
	    {
		temp=temp->next;
      	}	
		temp->next=newNode;  	
	}
	
	newNode->next=NULL;
	printf("Element enqueued is:%d\n",newNode->info);
}
void dequeue()
{
	struct node * temp= head;
	if(head==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Element dequeued is:%d\n",head->info);
		head=head->next;
		free(temp);
	}
}
traverse()
{
	struct node * temp=head;
	printf("The elements of queue are: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->info);
		temp=temp->next;
	}
	printf("\n");
}
void main()
{
	enqueue(10);
	enqueue(20);
	enqueue(15);
	traverse();
	dequeue();
	dequeue();
	traverse();
}
