#include<stdio.h>
int main()
{
    int n,i=1,fact=1;
    printf("Enter n:");
    scanf("%d",&n);

    Start:
        if(i<=n)
        {
            fact=fact*i;
            i++;

        goto Start;
        }

        printf("Sum:%d",fact);
        return 0;
}
