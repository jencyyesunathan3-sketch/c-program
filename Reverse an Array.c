#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reverse Array:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
