#include<stdio.h>
int sum(int);
void main()
{
	int n,s;
	printf("Enter nth term\n");
	scanf("%d",&n);
	s=sum(n  );
	printf("The sum of natural number upto %dth term is %d",n,s);
}
int sum(int a)
{
	if(a==0)
		return 0;
	else
		return (a+sum(a-1));
}
