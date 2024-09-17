#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *p;
    p = fopen("AAA.txt","w");
    
    if (p==NULL)
    {
        printf("File Not Found");
    }
    else
    {
        printf("File is Found");
        fprintf(p,"Hello!,Hi Everyone");
        getch();
    }
}