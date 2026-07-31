#include<stdio.h>
int main()
{
    int n,i=1,x;
    float p=1;
    printf("Enter x and n:");
    scanf("%d%d",&x,&n);

    Start:
        if(i<=n)
        {
            p=p*x;
            printf("1%f",p);
            i++;

        goto Start;
        }
        return 0;
}
