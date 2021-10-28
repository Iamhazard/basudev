#include<stdio.h>
int main()
{
	int n,i,key,found=0;
	printf("Enter the size of a list\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of a list\n");
	for(i=0;i<n;i++)
	  scanf("%d",&a[i]);
	printf("The list elements are:\n");
	for(i=0;i<n;i++)
	  printf("%d ",a[i]);
	printf("\nEnter the key element which you want to search\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
		   printf("%d was found at position %d",key,i+1);
		   found=1;
		   break;
		}
	}	
	if(!found)
	  printf("%d was not found",key);
	return 0;  
}
