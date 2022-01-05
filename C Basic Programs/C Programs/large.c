#include<stdio.h>
int main()
{
    int a,b,c,d,largeno;

    printf("\n Entet The Value of a: ");
    scanf("%d",&a);

    printf("\n Entet The Value of b: ");
    scanf("%d",&b);

    printf("\n Entet The Value of c: ");
    scanf("%d",&c);

    printf("\n Entet The Value of d: ");
    scanf("%d",&d);

    largeno = (a>b)?(a>c)?(a>d)?a:d: (b>c)?(b>d)?b:d: (c>d)?c:d:

    printf("\n Largest no is %d",largeno);
 
    return 0;
}