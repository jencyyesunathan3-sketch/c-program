#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter n:");
    scanf("%d",&n);

    Start:
        if(i<=n)
        {
            printf("%d*%d=%d\n",n,i,n*i);
            i++;

        goto Start;
        }
        return 0;
}
