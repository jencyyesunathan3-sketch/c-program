#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    int count,max=0,frequent;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            frequent=a[i];
        }
    }
    printf("Most frequented element:\n");
    printf("\n Frequency=%d",max);
    return 0;
}

