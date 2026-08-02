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
    printf("Frequency of elements:");
    for(i=0;i<n;i++)
    {
        count=1;
        if(arr[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=-1;
                }
            }
            printf("%d occurs %d times:arr[i]",count);
        }
    }
         return 0;


}
