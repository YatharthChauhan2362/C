// 1 : Using if Statement

/*#include <stdio.h>
int main() 
{
    double n1, n2, n3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2f is the largest number.", n1);

    if (n2 >= n1 && n2 >= n3)
        printf("%.2f is the largest number.", n2);

    if (n3 >= n1 && n3 >= n2)
        printf("%.2f is the largest number.", n3);

    return 0;
}*/



// 2 : Using Nested if...else
#include <stdio.h>
int main() 
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2) 
    {
        if (n1 >= n3)
            printf("%.2lf is the largest number.", n1);
        else
            printf("%.2lf is the largest number.", n3);
    } 
    else 
    {
        if (n2 >= n3)
            printf("%.2lf is the largest number.", n2);
        else
            printf("%.2lf is the largest number.", n3);
    }

    return 0;
}


// 3 : Using if...else Ladder
/*#include <stdio.h>
int main() 
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%.2lf is the largest number.", n1);

    else if (n2 >= n1 && n2 >= n3)
        printf("%.2lf is the largest number.", n2);

    else
        printf("%.2lf is the largest number.", n3);

    return 0;
}*/
