#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int i, j, n;
    char str[100][100], s[100];
    //clrscr();

    printf("Enter number of names:");
    scanf("%d", &n);

    printf("Enter the names in any order: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for ( j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(s, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], s);
            }
        }
    }

    printf("The sorted order of names are :\n");
    for (i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    getch();
    return 0;

}