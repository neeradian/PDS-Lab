#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,result;
	int *ptr1,*ptr2;
	// clrscr();
	printf("Enter first number:");
	scanf("%d",&num1);

	printf("Enter second number:");
	scanf("%d",&num2);

	ptr1=&num1;
	ptr2=&num2;

	result = *ptr1 + *ptr2;
	printf("\nsum:%d\n",result);

	result = *ptr1- *ptr2;
	printf("Difference :%d\n",result);

	result = *ptr1 * *ptr2;
	printf("Product : %d\n",result);

	if(*ptr2!=0)
	{
		result=*ptr1 / *ptr2;
		printf("Quotient :%d\n",result);
	}
	else{
		printf("Division by zero is not allowed.\n");
	}
	getch();
	return 0 ;
}