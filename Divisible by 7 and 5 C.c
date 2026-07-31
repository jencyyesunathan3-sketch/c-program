#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    (n%7==0 && n%5==0)?printf("Divisible by 7 and 5"):printf("Not divisible by 7 and 5");

    return 0;
}
