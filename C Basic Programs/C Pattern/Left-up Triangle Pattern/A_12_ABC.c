/*
A 
1 2
A B C
1 2 3 4 
A B C D E 
*/

#include <stdio.h>
int main()
{
    int i, j, n, l;
    char k;

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        k = 'A';
        l = 1;

        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", l++);
            }
            else
            {
                printf("%c ", k++);
            }
        }
        printf("\n");
    }
    return 0;
}