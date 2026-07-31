#include<stdio.h>
int main()
{
    char ch;
    printf("Enter ch:");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z')
    {
        printf("It is an Uppercase");
    }
    else if(ch>='a'&&ch<='z')
    {
        printf("It is a Lowercase");
    }
    else
    {
        printf("It is not an alphabet");
    }
    return 0;
}
