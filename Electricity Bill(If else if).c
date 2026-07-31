#include<stdio.h>
int main()
{
    int units;
    printf("Enter the units:");
    scanf("%d",&units);

    if(units<=500)
    {
        printf("Rs.20 per unit");
    }
    else if(units<=1000)
    {
        printf("Rs.40 per unit");
    }
    else if(units>=1000)
    {
        printf("Rs.100 per unit");
    }
    else
    {
        printf("No units");
    }
    return 0;
}
