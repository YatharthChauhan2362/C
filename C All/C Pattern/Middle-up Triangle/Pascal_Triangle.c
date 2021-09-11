/*
             1
           1   1
         1   2   1
       1   3   3   1
     1   4   6   4   1
   1   5  10  10   5   1
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, count = 1;

    printf("Enter the number of rows you want:");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                count = 1;
            else
                count = count * (i - j + 1) / j;

            printf("%4d", count);
        }
        printf("\n");
    }
    printf("Pascal's pyramid pattern\n");
    return 0;
}
