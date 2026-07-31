#include<stdio.h>
int main()
{
    int choice;
    printf("Enter the choice(1-3):");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Apple");
        break;

    case 2:
        printf("Mango");
        break;

    case 3:
        printf("Orange");
        break;

    default:
        printf("Invalid choice");

    }
    return 0;
}
