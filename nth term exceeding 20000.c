#include<stdio.h>
int main()
{
    int n,term;

    scanf("%d",&n);

    if(n<=0 || n>20000)
        return 0;

    if(n % 2 == 1)

        term=(n-1);

    else

        term=(n/2)-1;

    printf("%d",term);
    return 0;
}


