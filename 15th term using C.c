#include<stdio.h>
int main()
{
    int n,term;

    scanf("%d",&n);

    if(n % 2 == 1)

        term=(n / 2) * 7;

    else

        term=(n / 2-1) * 6;

    printf("%d",term);
    return 0;
}


