#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,rows,cols;
    printf("Enter number of rows:");
    scanf("%d",&rows);

    printf("Enter number of columns:");
    scanf("%d",&cols);

    printf("Enter Matrix Elements:");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("2D Array:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
