#include<stdio.h>
int main()
{
    int x,n,i=2,fact=1,power=1,sign=-1;
    float sum=1;
    printf("Enter x and n:");
    scanf("%d%d",&x,&n);

    do
    {
        power = 1;
        int j=1;
        do
        {
            power = power*x;
            j++;
        }while(j<=i);
        fact = i;
        j=1;
        do
        {
            fact=fact*j;
            j++;
        }while(j<=i);

        sum=sum+sign*(float)power/fact;

        sign=-sign;
        i=i+2;
    }while(i<=n);
    printf("sum=%2f",sum);
    return 0;
}
