#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter n:");
    scanf("%d",&n);

    Start:
        if(i<=n)
        {
            printf("%d",i);
            i=i+2;

        goto Start;
        }
        return 0;
}
