#include<stdio.h>
int main()
{
    int x,n,i=2,fact=1,power=1,sign=-1;
    float sum=1;
    printf("Enter x and n:");
    scanf("%d%d",&x,&n);

    while(i<=n)
    {
        power = 1;
        int j=1;
        while(j<=i)
        {
            power = power*x;
            j++;
        }
        fact = i;
        j=1;
        while(j<=i)
        {
            fact=fact*j;
            j++;
        }

        sum=sum+sign*(float)power/fact;

        sign=-sign;
        i=i+2;
    }
    printf("sum=%2f",sum);
    return 0;
}
