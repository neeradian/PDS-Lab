#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[],int n,int x)
{
	int i;
	for(i=0;i<=n;i++)
	{
		if (arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[],int n,int x)
{
	int low = 0;
	int high = n-1;
	while (low<=high)
	{
		int mid = (low + high)/2;
		if (arr[mid]==x)
		{
			return mid;
		}
		else if (arr[mid]<x)
		{
			low = mid + 1;
		}
		else
		{
			high = mid-1;
		}
	}
	return -1;
}

int main(){
	int arr[]={1,3,5,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=5;

	int result=linearSearch(arr,n,x);
	// system("cls");
	if (result==-1)
		printf("Element not found\n");
	else
		printf("Element found at index %d\n",result);

	result=binarySearch(arr,n,x);
	if (result==-1)
		printf("Element not found\n");
	else
		printf("Element found at index %d\n",result);

	getch();
	return 0;
}