#include<stdio.h>
void TOH(int n,char src,char dest,char helper)
{
	if(n>0)
	{
		TOH(n-1,src,helper,dest);
		printf("Move disc %d from %c to %c\n",n,src,dest);
		TOH(n-1,helper,dest,src);
	}
}
void main()
{
	int n;
	printf("Enter number of discs\n");
	scanf("%d",&n);
	TOH(n,'S','D','A');
}

