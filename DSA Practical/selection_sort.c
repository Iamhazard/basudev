#include<stdio.h>
void selectionSort(int[],int);
void main()
{
	int i,a[]={5,4,9,0,-2,14,12,25,3};
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
	printf("\n");
	printf("After sorting\n");
	selectionSort(a,8);
	for(i=0;i<=8;i++)
		printf("%d\t",a[i]);
}
void selectionSort(int a[],int n)
{
	int i,j,least,pos,temp;
	for(i=0;i<=n-1;i++)
	{
		least=a[i];
		pos=i;
		for(j=i+1;j<=n;j++)
		{
			if(a[j]<least)
			{
				least=a[j];
				pos=j;
			}
		}
		temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
}
