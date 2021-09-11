/*
    *
   ***
  *****
 *******
*********
*/

#include <stdio.h>
int main()
{
    int i, j, n, k;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {;k;k;3
        for(k=1; k<=n-i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= n-i; j++)
        {
            printf("*");           
        }
        printf("\n");
    }
    return 0;
}