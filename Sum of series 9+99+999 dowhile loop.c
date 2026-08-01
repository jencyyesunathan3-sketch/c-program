#include<stdio.h>
int main()
{
    int n,i=1,term=0,sum=0;
    printf("Enter number of terms:");
    scanf("%d",&n);

    do
    {
        term = term*10+9;
        sum = sum+term;
        i++;
    }while(i<=n);

    printf("Sum=%d",sum);

    return 0;

}
