#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    while(i<=n)
    {
        sum=sum+1.0/i;
        i++;
    }

    printf("Sum=%2f",sum);

    return 0;

}
