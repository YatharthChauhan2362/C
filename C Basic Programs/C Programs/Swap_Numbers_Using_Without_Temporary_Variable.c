 //C Program to Swap Numbers Using Without Temporary Variable

#include<stdio.h>

int main()
{
    int a=10,b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    printf("a=%d b=%d",a,b);
}
