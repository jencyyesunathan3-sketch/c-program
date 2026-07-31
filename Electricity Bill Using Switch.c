#include<stdio.h>
int main()
{
    int units,choice;
    float bill=0;

    printf("Enter units:");
    scanf("%d",&units);

    if(units<=100)
    {
        choice = 1;
    }

    else if(units<=200)
    {
        choice = 2;
    }

    else if(units<=300)
    {
        choice = 3;
    }

    else
    {
        choice = 4;
    }

    switch(choice)
    {
    case 1:
        bill = units*1.50;
        printf("%d",bill);
        break;

    case 2:
        bill = 100*1.50+(units-100)*2.50;
        printf("%d",bill);
        break;

    case 3:
        bill = 100*1.50+100*2.50+(units-200)*400;
        printf("%d",bill);
        break;


    case 4:
        bill = 100*1.50+100*2.50+100*4.00+(units-300)*6.00;
        printf("%d",bill);
        break;

    default:
        printf("Electricity Bill=Rs.%2f",bill);
    }

    return 0;
}

