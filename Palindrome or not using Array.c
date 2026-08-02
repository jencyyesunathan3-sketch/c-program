#include<stdio.h>
int main()
{
    int a[100],i,n,flag=1;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    return 0;
}

