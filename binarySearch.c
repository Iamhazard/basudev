#include<stdio.h>
int binarySearch(int arr[],int n,int key){
	int s=0;
	int e=n;
	while(s<=e){
		int mid=(s + e)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
} 
void main()
{
	int n,i,key;
	printf("How many element you want to enter\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter key element\n");
	scanf("%d",&key);
	int a=binarySearch(arr,n,key);
	if(a==-1)
		printf("%d is not found",key);
	else	
	 printf("%d found at index %d",key,a);
	 
}
