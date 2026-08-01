#include<stdio.h>
int main()
{
    int x,n,i=1,power=1,sum=1;
    printf("Enter x and n:");
    scanf("%d",&x,&n);

    while(i<=n)
    {
        power=power*x;
        sum = sum+power;
        i++;
    }

    printf("Sum=%d",sum);

    return 0;

}
