#include<stdio.h>
int main()
{
    int i,j,k,space;

    for(i=1;i<=5;i++)
    {
        for(space=1;space<=5-i;space++)
            printf(" ");
        k=i;

        for(j=1;j<=i;j++)
            printf("%d",k+1);
        k=k-2;

        for(j=1;j<i;j++)
            printf("%d",k--);

        printf("\n");
    }
    return 0;
}
