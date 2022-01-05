/*
    #
   *#?
  **#??
 ***#???
****#????
*/

#include <stdio.h>
int main()
{
    int i, j, n, k;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= (n - i); k++)
        
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (j < i)
                printf("*");

            else if (j == i)
                printf("#");

            else
                printf("?");
        }
        printf("\n");
    }
    return 0;
}