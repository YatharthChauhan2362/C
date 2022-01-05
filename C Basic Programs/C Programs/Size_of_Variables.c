// Program to Find the Size of Variables

#include<stdio.h>
int main() 
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("\n Size of int: %d bytes", sizeof(intType));
    printf("\n Size of float: %d bytes", sizeof(floatType));
    printf("\n Size of double: %d bytes", sizeof(doubleType));
    printf("\n Size of char: %d byte", sizeof(charType));
    
    return 0;
}
