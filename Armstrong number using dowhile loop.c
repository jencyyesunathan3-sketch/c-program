#include<stdio.h>
int main()
{
    int n,temp,rem,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    temp=n;

    do
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }while(temp>0)
    if(sum==n)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}
