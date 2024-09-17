#include<stdio.h>

void swap(int *n1,int *n2)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = temp;
}


void main()
{
    int num1,num2;

    printf("Enter First Number:\n");
    scanf("%d",&num1);

    printf("Enter Second Number:\n");
    scanf("%d",&num2);

    printf("Before Swapping\n");
    printf("First Number is %d\n",num1);
    printf("Second Number is %d\n\n",num2);

    swap(&num1,&num2);

    printf("After Swapping\n");
    printf("First Number is %d\n",num1);
    printf("Second Number is %d\n\n",num2);
}