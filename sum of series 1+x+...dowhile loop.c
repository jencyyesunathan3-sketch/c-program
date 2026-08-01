#include<stdio.h>
int main()
{
    int x,n,i=1,power=1,sum=1;
    printf("Enter x and n:");
    scanf("%d",&x,&n);

    do
    {
        power=power*x;
        sum = sum+power;
        i++;
    }while(i<=n);

    printf("Sum=%d",sum);

    return 0;

}
