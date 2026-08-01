#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    do
    {
        sum=sum+1.0/i;
        i++;
    }while(i<=n);

    printf("Sum=%2f",sum);

    return 0;

}
