#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n>0)
    {
        if(n%2==0)
        {
            printf("Positive Even Number");
        }
        else
        {
            printf("Positive Odd Number");
        }
    }
    else
    {
            printf("Negative Number");

    }
    return 0;
}
