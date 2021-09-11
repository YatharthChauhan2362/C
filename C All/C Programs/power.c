#include<stdio.h>
int main()
{
    int count=1,n1,n2,result=1;

    printf("\n Enter a Value of n1");
    scanf("%d",&n1);

    printf("\n Enter a Value of n2");
    scanf("%d",&n2);

    
        if(n1>n2)
        {
            while (count<=10)
            {
            result=n1*result;
            count++;
            }

        }
        else
        {
            while (count<=10)
            {
            result=n2*result;
            count++;
            }
        }
    printf("%d",result);
    }

    return 0;
}