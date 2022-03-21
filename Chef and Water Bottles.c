/*   Chef and Water Bottles 
https://www.codechef.com/START30D/problems/CHEFBOTTLE */

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,x,k,c=0;
	scanf("%d",&t);
	while(t--)
	{
	    c=0;
	    scanf("%d%d%d",&n,&x,&k);
	    while(x<=k)
	    {
	        k-=x;
	        c++;
	    }
	    if(n>=c)
	        printf("%d\n",c);
	    else
	        printf("%d\n",n);
	}
	return 0;
}
