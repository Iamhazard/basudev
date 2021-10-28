#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,n,i;
	printf("How many element you want to enter?\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	printf("Entered array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	printf("\nHow many element you want to enter in new array?\n");
	scanf("%d",&n);
	a=(int*)realloc(a,n*sizeof(int));
	printf("Enter new array element\n");
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
	printf("New array element are:\n");
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));		
	return 0;
}  
