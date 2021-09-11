#include <stdio.h>
#define N 50

int main()
{
    int arr1[N], arr2[N], size1, size2, i, j, k, tmp, merge[N * 2];

    printf("Enter array 1 size:");
    scanf("%d", &size1);
    printf("Enter array 1 Elements:\n");

    for (i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }

    k = i;

    printf("\nEnter array 2 Size:");
    scanf("%d", &size2);
    printf("Enter array 2 element:\n");

    for (i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }

    for (i = 0; i < k; i++)
    {
        for (j = i + 1; j < k; j++)
        {
            if (merge[j] < merge[i])
            {
                tmp = merge[i];
                merge[i] = merge[j];
                merge[j] = tmp;
            }
        }
    }
    printf("\nThe merging array in ascending order:");

    for (i = 0; i < k; i++)
    {
        printf("\n%d", merge[i]);
    }

    return 0;
}
