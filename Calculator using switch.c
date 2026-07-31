#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    printf("1.Add\n,2.Sub\n,3.Multi\n,4.Div\n:");
    printf("Enter the choice(1-4):");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Add:%d\n",a+b);
        break;

    case 2:
        printf("Sub:%d\n",a-b);
        break;

    case 3:
        printf("Multi:%d\n",a*b);
        break;

    case 4:
        printf("Div:%d",a/b);
        break;

    default:
        printf("Invalid Choice");
    }
    return 0;
}

