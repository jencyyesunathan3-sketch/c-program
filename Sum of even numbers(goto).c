#include<stdio.h>
int main()
{
    int n,i=2,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    Start:
        if(i<=n)
        {
            sum=sum+i;
            i=i+2;

        goto Start;
        }

        printf("Sum:%d",sum);
        return 0;
}
