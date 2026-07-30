#include<stdio.h>
enum day{Mon,Tues,Wed,Thrus,Fri,Sat,Sun};
int main()
{
    enum day today = Mon;
    printf("%d",today);

    enum day tomarrow = Thrus;
    printf("%d",tomarrow);

    return 0;
}

