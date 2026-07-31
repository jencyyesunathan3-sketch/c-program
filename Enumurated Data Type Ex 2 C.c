#include<stdio.h>
enum day{Mon=1,Tues,Wed,Thrus,Fri,Sat,Sun};

int main()
{
    enum day today = Mon;
    printf("Today:%d\n",today);
    return 0;
}
