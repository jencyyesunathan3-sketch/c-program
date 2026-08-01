#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the n:");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
        sum=sum+i;
        printf("Sum of Natural Numbers:%d",sum);
    return 0;
}
