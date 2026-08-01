#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    do
    {
        sum=sum+1.0/(i*i);
        i++;
    }while(i<=n);

    printf("Sum=%4f",sum);

    return 0;

}
