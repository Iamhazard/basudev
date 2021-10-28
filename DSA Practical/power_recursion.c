#include<stdio.h>
int power(int,int);
void main()
{
	int x,y,p;
	printf("Enter value of x and y\n");
	scanf("%d%d",&x,&y);
	p=power(x,y);
	printf("The result is %d",p);
}
int power(int a,int b)
{
	if(b==0)
		return 1;
	else
		return(a*power(a,b-1));	
}

