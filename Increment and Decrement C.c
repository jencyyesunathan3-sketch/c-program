#include<stdio.h>
int main()
{
    int x=10;

    printf("Post Increment:%d\n",x++);
    printf("Pre Increment:%d\n",++x);
    printf("Post Decrement:%d\n",x--);
    printf("Pre decrement:%d\n",--x);
    printf("%d%d%d\n",x,x++,++x);
    printf("%d%d%d\n",++x,x,x++);

    return 0;
}
