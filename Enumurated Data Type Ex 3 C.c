#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter the height and base:");
    scanf("%f %f",&height,&base);

    area = 0.5*base*height;
    printf("Area of Triangle:%2f\n",area);

    return 0;
}

