/*
5 
4 4
3 3 3 
2 2 2 2
1 1 1 1 1
*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {

        for (j = i; j <= n; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}