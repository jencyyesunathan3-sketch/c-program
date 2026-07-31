#include<stdio.h>
int main()
{
    char ch;
    printf("Enter ch:");
    scanf("%c",&ch);

    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("It is an Alphabet");
    }
    if(ch>='0'&&ch<='9')
    {
        printf("It is a Digit");
    }
    else
    {
        printf("It is a special character");
    }
    return 0;
}
