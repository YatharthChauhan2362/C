// (Question-17) Write C Program to convert number of days into years,weeks and days Expected output:       
#include<stdio.h>

int main()
{
    int d,y,w;

    printf("Total days:");
    scanf("%d", &d);

    y = (d / 365);
    w = (d % 365) / 7;
    d = d - ((y * 365) + (w * 7));

    printf("\n Years: %d", y);
    printf("\n Weeks: %d", w);
    printf("\n Days: %d", d);

    return 0;
}