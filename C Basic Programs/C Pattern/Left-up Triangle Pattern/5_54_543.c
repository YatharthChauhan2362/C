/*
5 
5 4
5 4 3 
5 4 3 2
5 4 3 2 1
*/

#include <stdio.h>
int main()
{
    int i, j, n;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {

        for (j = n; j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}