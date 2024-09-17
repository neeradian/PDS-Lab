#include<stdio.h>
#include<conio.h>

int main()
{

	int a[]={20,10,3,40,68,67};
	int n=6;
	int i,j;
	// system("cls");
	for (i=0;i<n-1;i++)
	{
		int min=i;
		for (j=i+1;j<n;j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		if(min!=i)
		{
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	for (i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
	getch();
	return 0;
}

