#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    (n%11==0 && n%32==0)?printf("Multiples of 11 and 32"):printf("Not a multiples of 11 and 32");

    return 0;
}

