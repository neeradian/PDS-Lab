#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10], b[10][10], mul[10][10], sum, r, c, i, j, k;
    system("cls");
    printf("Enter the number of rows =");
    scanf("%d", &r);

    printf("Enter the number of columns =");
    scanf("%d", &c);

    printf("Enter the first matrix elements = \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the second matrix element =\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (k = 0; k < c; k++)
            {
                sum = 0;
                sum= sum + a[i][k] * b[k][j];
            }
            mul[i][j] = sum;
        }
    }

    // for printing result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", &mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
