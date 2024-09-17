#include<stdio.h>
#include<conio.h>

int main()
{
    int base, exp;
    float result = 1;
    printf("Enter a base number:");
    scanf("%d",&base);

    printf("Enter an exponent:");
    scanf("%d",&exp);

    while (exp!=0)
    {
    result = result * base;
    --exp;
    }

    printf("Answer = %0.Lf", result);
    getch();
    return 0;
}
