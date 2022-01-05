/*
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
 1 2 3 4 5 4 3 2 1
*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        /* print blank spaces */
        for (j = 1; j <= n - i; j++)
            printf("  ");
        /* Display number in ascending order upto middle*/
        for (j = 1; j <= i; j++)
            printf("%2d", j);

        /* Display  number in reverse order after middle */
        for (j = i - 1; j >= 1; j--)
            printf("%2d", j);

        printf("\n");
    }
}
