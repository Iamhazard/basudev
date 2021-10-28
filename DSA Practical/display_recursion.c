#include<stdio.h>
 void display(int);
void main()
{
	int n,i;
	printf("How many times you want to display\n");
	scanf("%d",&n);
	display(n);
}
void display(int a)
{
	int i=a;
	if(i>0)
	{
		printf("Welcome to class\n");
		i--;
		display(i);
	}
}
