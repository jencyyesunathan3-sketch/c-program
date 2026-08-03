#include<stdio.h>
int main()
{
    int n,i;
    long long term =1;

    scanf("%d",&n);

    if(n%2==1)
    {
        for(i=1;i<=(n-1)/2;i++)
            term=term*2;
    }
    else
    {
        for(i=1;i<n/2;i++)
            term=term*3;
    }
    printf("%lld",term);

    return 0;
}
