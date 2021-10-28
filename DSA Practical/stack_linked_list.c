#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *next;
};
struct node *head;
void push(int data)
{
	struct node * newNode=(struct node *)malloc(sizeof(struct node));
	newNode->info=data;
	if(head==NULL)
	{
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->next=head;
		head=newNode;
	}
	printf("Element pushed is:%d\n",newNode->info);
}
void pop()
{
	struct node * temp= head;
	if(head==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Element poped is:%d\n",head->info);
		head=head->next;
		free(temp);
	}	
}
void traverse()
{
	struct node * temp=head;
	printf("The elements of stack are: ");
	while(temp!=NULL)
	{
		printf("%d ",temp->info);
		temp=temp->next;
	}
	printf("\n");
}
void main()
{
	push(20);
	push(10);
	push(30);
	traverse();
	pop();
	pop();
	traverse();
	
}
