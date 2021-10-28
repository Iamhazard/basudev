#include<stdio.h>
void swap(int arr[],int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i=l-1;
	int j;
	
	for(j=l;j<r;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}
void quickSort(int arr[],int l,int r)
{
	if(l<r)
	{
		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
	}
}
int main()
{
	int i,arr[]={5,4,9,0,-2,14,12,25,3};
	for(i=0;i<=8;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	printf("After sorting\n");
	quickSort(arr,0,8);
	for(i=0;i<9;i++)
		printf("%d\t",arr[i]);
	return 0;	
}



