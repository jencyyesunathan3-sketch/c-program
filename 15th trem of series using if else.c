#include<stdio.h>
int main()
{
    int n=15;
    int term;
    if(n%2==1)
    {
        term=((n-1)/2)*7;
    }
    else
    {
        term=((n-2)/2)*6;
    }
    printf("%d",term);
    return 0;
}
