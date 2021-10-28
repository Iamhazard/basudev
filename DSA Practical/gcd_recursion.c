#include<stdio.h>
int gcd(int,int);
void main()
{
	int x,y,r;
	printf("Enter any two numbers\n");
	scanf("%d%d",&x,&y);
	r=gcd(x,y);
	printf("The greatest common divisor(gcd) is %d",r);	
}
int gcd(int a,int b)
{
	 if(b==0)
		return a;
	else
		return (gcd(b,a%b));				
}
