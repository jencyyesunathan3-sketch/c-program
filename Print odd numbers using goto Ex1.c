#include<stdio.h>
int main()
{
    int n,i=1;
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
