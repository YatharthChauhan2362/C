//Perfect Number Between 1 to n

#include <stdio.h>
int main()
{
    int i, j, end, sum;

    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("\n All Perfect numbers between 1 to %d: ", end);

    for (i = 1; i <= end; i++)
    {
        sum = 0;

        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }

        if (sum == i)
        {
            printf("%d", i);
            printf("\n");
        }
    }
    return 0;
}