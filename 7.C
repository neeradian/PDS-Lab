#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();

int main()
{
	// system("cls");
	printf("Enter the number of elements in the stack:");
	scanf("%d",&n);
	printf("\n****Stack operation using array****\n");
	printf("\n-----------------------------------\n");
	while (choice!=4)
	{
		printf("\nChoice one from the below option__\n");
		printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
			case 4:
				printf("Exiting___");
				break;
			default:
				printf("Please Enter Valid Choice");
		}
	}
	return 0;
}

void push()
{
	int val;
	if (top==n)
		printf("\nOVERFLOW\n");
	else
	{
		printf("Enter the value ?\n");
		scanf("%d",&val);
		top =top+1;
		stack[top]=val;
	}
}

void pop()
{
	if (top==-1)
		printf("\nUNDERFLOW\n");
	else
		top = top-1;

}


void show()
{
	printf("The values are\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
	if (top==-1)
	{
		printf("\nStack is empty\n");
	}
}