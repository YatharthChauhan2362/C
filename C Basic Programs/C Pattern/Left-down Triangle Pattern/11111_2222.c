/*
1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5
*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}