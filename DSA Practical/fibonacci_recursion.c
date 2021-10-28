#include<stdio.h>
int fibo(int);
void main()
{
	int n,i;
	printf("Enter the nth term\n");
	scanf("%d",&n);
	printf("Fibonacci series upto %dth term is: ",n);
	for(i=0;i<n;i++)
		printf("%d ",fibo(i));
}
int fibo(int a)
{
	if(a==0)
		return 0;
	else if(a==1)
		return 1;
	else
		return(fibo(a-1)+fibo(a-2));	
}
