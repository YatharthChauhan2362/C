/*
1 
0 1
0 1 0
1 0 1 0 
1 0 1 0 1
*/

#include <stdio.h>
int main()
{
    int i, j, n, k;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    k = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}