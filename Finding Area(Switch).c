#include<stdio.h>
int main()
{
    int choice;
    float area,radius,length,breath,height,circumference;

    printf("1.Circle\n,2.Triangle\n,3.Square\n,4.Reactangle\n,5.Circumference\n");
    printf("Enter the choices between 1-4:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the radius:");
        scanf("%f",&radius);
        area = 3.14*radius*radius;
        printf("Area of Circle:%2f",area);
        break;

    case 2:
        printf("Enter the Breath and height:");
        scanf("%f%f",&breath,&height);
        area = 0.5*breath*height;
        printf("Area of Triangle:%2f",area);
        break;

    case 3:
        printf("Enter the area:");
        scanf("%f",&area);
        area = area*area;
        printf("Area of Square:%2f",area);
        break;


    case 4:
        printf("Enter the length and breath:");
        scanf("%f%f",&length,&breath);
        area = length*breath;
        printf("Area of Rectangle:%2f",area);
        break;

    case 5:
        printf("Enter the radius");
        scanf("%f",&radius);
        area = 2*3.14*radius;
        printf("Circumference of Circle:%2f",area);
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}

