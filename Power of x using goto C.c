#include<stdio.h>
int main()
{
    int n,i=1,x;
    long int p=1;
    printf("Enter x and n:");
    scanf("%d%d",&x,&n);

    Start:
        if(i<=n)
        {
            p=p*x;
            printf("%ld",p);
            i++;

        goto Start;
        }
        return 0;
}
