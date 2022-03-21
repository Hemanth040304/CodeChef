/*	Chef and Chocolates
https://www.codechef.com/START30D/problems/CHEFCHOCO  */
#include<stdio.h>

int main()
{
    int t,c,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&c,&x,&y);
        printf("%d\n",(c-x)*y);
    }
}
