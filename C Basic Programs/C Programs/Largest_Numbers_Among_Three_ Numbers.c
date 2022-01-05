//Find the Largest Numbers Among Three Numbers

#include<stdio.h>

int main()
{
    double a,b,c;

    printf("ENTER THE THREE DIFFERT NUMBERS \n");
    scanf("%f %f %f",&a,&b,&c);

    if (a>=b && a>=c)
    printf("%f a is the largest number /n",a);

     if (b>=a && b>=c)
    printf("%f b is the largest number /n",b);

     if (c>=a && c>=b)
    printf("%f c is the largest number /n",c);

}
