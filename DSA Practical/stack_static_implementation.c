#include<stdio.h>
# define N 4
struct stack
{
	int data[N];
	int top;
}s;
void create_stack();
void push(int);
void pop();
void top();
int isFull();
int isEmpty();
void main()
{
	create_stack();
	push(2);
	top();
	push(5);
	top();
	push(10);
	top();
	push(4);
	top();
	push(6);
	top();
	pop();
	top();
	pop();
	top();
	pop();
	top();
	pop();
	top();
	pop();
	top();
	push(8);
	top();	
}
void create_stack()
{
	s.top=-1;
}
int isFull()
{
	if(s.top==N-1)
	 return 1;       //stack is full,overflow condition.
	else
	 return 0;      //stack is not full.
}
void push(int a)
{
	if(isFull()==0)
	{
		s.top=s.top+1;
		s.data[s.top]=a;
	}
	else
	 printf("The stack is full.\n");
}
int isEmpty()
{
	if(s.top==-1)
	 return 1;    //stack is empty,underflow condition.
	else
	 return 0;    //stack is not empty.
}
void pop()
{
	if(isEmpty()==0)
	{
		printf("Element to popped is:%d\n",s.data[s.top]);
		s.top=s.top-1;
	}
	else
	  printf("stack is empty.\n");
}
void top()
{
	printf("Top element is:%d\n",s.data[s.top]);
}


