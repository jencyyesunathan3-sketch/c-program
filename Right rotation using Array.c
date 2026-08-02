#include<stdio.h>
int main()
{
    int a[100],n,i,temp;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    temp=a[n-1];
    printf("Left Rotation:");
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    return 0;
}

