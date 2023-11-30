#include<stdio.h>
int binary_search(int arr[],int search,int size)
{
	int mid=0,low=0,high=0,i;
	while(low<=mid)
	
	{
		mid=(low+high)/2;
		for(i=0;i<size;i++)
		{
			mid=(low+high)/2;
			if(arr[search]>arr[mid])
				low=mid+1;
			if(arr[search]<arr[mid])
				high=mid-1;
			else
				 return mid;	
		}
	}
	return -1;
}
int main(void)
{
	int i;
	int arr[4]={1,2,3,4};
	binary_search(arr,3,4);
	for(i=0;i<4;i++)
	{
		printf("%d  ",arr[i]);	
		
	}	

}

