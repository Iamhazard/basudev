#include<stdio.h>
void insertionSort(int[],int);
void main()
{
	int i,a[]={5,4,9,0,-2,14,12,25,3};
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("\nAfert sorting\n");
	insertionSort(a,8);
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
}
void insertionSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<=n;i++)
	{
		j=i-1;
		temp=a[i];
		while(temp<=a[j] && j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
