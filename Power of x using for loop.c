#include<stdio.h>
int main()
{
    int n,i,x;
    long int p=1;

    printf("Enter the x and n:");
    scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++)
    {
        p=p*x;
        printf("%ld",p);
    }

    return 0;
}
