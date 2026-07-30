#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    (n%7==0)? printf("Twice:%d\n",2*n):printf("Thrice:%d\n",3*n);

    return 0;
}

