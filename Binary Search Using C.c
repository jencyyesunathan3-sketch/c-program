#include<stdio.h>
int main()
{
    int arr[100],n,key;
    int low,high,mid;
    int i,found=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&key);

    low=0;
    high=n-1;

    while(low<=high)
    {
        mid = (low + high)/2;

        if(arr[mid]==key)
        {
            found=1;
            break;
        }
        else if(key<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
