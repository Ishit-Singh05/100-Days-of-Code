#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,k,x,y;
	    scanf("%d %d",&n,&k);
	    x=k+1;
        y=n/x;
        printf("%d\n",n-(k*y));
                    
	}

}

