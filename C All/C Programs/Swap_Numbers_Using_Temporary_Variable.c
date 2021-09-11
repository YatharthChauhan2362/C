 //C Program to Swap Numbers Using Temporary Variable

#include<stdio.h>

int main()
{
   int a=10,b=20,c;
   c=a;
   a=b;
   b=c;

   printf("a=%d b=%d",a,b);
}

