#include<stdio.h>
int main()
{
    int arr[100],i,j,n,count;
    printf("Enter the numbers:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    printf("Unique Elements:");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d",arr[i]);
        }
    }
    return 0;
}
