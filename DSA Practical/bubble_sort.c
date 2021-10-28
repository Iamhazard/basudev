#include<stdio.h>
void bubbleSort(int[],int);
void main()
{
	int i,a[]={5,4,9,0,-2,14,12,25,3};
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("After sorting\n");
	bubbleSort(a,8);
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
}
void bubbleSort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
