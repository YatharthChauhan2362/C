/*
A 
B B
C C C 
D D D D
E E E E E
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    char k = 'A';

    printf("Enter The Number of Column: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", k);
        }
        k++;
        printf("\n");
    }
    return 0;
}