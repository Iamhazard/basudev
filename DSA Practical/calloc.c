#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	printf("How many element you want to enter?\n");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	printf("Entered array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));		
	return 0;
}
