#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n>=100 && n<=999)
    {
        printf("It is a three digit number");
    }
    else
     {
         printf("Not a three digit number");
     }

    return 0;
}
