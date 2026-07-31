#include<stdio.h>
int main()
{
    char ch;
    printf("Enter ch:");
    scanf("%c",&ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("vowel");
    }
    else
     {
         printf("Not a vowel");
     }

    return 0;
}
