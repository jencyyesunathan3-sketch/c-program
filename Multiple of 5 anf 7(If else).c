#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    if(n%7==0 && n%5==0)
    {
        printf("Multiple of 7 and 5");
    }
    else
     {
         printf("Not a multiple of 7 and 5");
     }

    return 0;
}
