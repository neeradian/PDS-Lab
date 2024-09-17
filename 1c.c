#include <stdio.h>
#include <math.h>

int main()
{
    int phy, chem, bio, math, comp, n, i, g;
    float per;

    printf("Enter the number of students:");
    scanf("%d", &n);

    /* Input marks of five subject from user*/
    for (i = 1; i <= n; i++)
    {
        printf("Enter five subjects marks:");
        scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

        /* Calculate percentage*/
        per = (phy + chem + bio + math + comp) / 5;
        printf("Percentage = %.2f\n", per);
        g = round(per);

        /*Find grade according to the percentage*/
        switch (g / 10)
        {
        case 10:
        case 9:
            printf("\n Your Grade is A\n");
            break;
        case 8:
            printf("\n Your Grade is B\n");
            break;
        case 7:
            printf("\n Your Grade is C\n");
            break;
        case 6:
            printf("\n Your Grade is D\n");
            break;
        case 5:
            printf("\n Your Grade is E\n");
            break;
        case 4:
            printf("\n Your Grade is E--\n");
            break;
        default:
            printf("\n Your Grade is F or Fail\n");
        }
    }
    return 0;
}