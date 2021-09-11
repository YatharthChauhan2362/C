/*
A 
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    char k;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = 'A';

        for (j = 1; j <= i; j++)
        {
            printf("%c ", k++);
        }
        printf("\n");
    }

    return 0;
}