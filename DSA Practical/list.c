#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter any 10 numbers\n");
	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
	printf("The number you entered are:\n");
	for(i=0;i<10;i++)
	 printf("%d ",a[i]);
	return 0;  
}
