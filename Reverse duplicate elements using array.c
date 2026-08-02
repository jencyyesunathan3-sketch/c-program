#include<stdio.h>
int main()
{
    int a[100],n,i,j,k;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k=n-1;k++)
                {
                    a[i]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Removed duplicated arrays:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
