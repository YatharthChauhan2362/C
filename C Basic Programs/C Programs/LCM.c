//LCM Calculation Using GCD

#include <stdio.h>
int main() 
{
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i=1; i<=n1 && i<=n2; ++i) 
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}

//LCM using while and if
/*
#include <stdio.h>
int main() 
    {
    int n1, n2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    lcm = (n1 > n2) ? n1 : n2;

    while (1) 
    {
        if (lcm % n1 == 0 && lcm % n2 == 0) 
        {
            printf("The LCM of %d and %d is %d.", n1, n2, lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
*/
