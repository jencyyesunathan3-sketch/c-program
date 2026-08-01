#include<stdio.h>
int main()
{
    int n,i=2,flag=1;
    printf("Enter n:");
    scanf("%d",&n);

    if(n>1)
    {
        do
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }

        i++;

        }while(i<=n/2);
    }
    if(flag==1 && n>1)
    {
        printf("Prime");

    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}
