//  Determine the Score
//  https://www.codechef.com/submit/DETSCORE?tab=statement
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,n;
	    scanf("%d%d",&x,&n);
	    x=x/10;
	    printf("%d\n",x*n);
	}
	return 0;
}
