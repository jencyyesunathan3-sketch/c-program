#include<stdio.h>
int main()
{
    int arr[100],n,Key;
    int i,found=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    scanf("%d",&Key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==Key)
        {
            found = 1;
            break;
        }
    }
    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;

}

