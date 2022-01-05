//Sum of Natural Numbers Using for Loop

#include <stdio.h>
int main() 
    {
    int n,i,sum=0;

    printf("\n Enter a positive integer : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of Natural Numbers = %d", sum);

    return 0;
}
