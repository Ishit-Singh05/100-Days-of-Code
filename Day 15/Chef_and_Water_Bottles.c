#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,x,k;
	    scanf("%d %d %d",&n,&x,&k);
	    if(n>=k/x){
	        printf("%d\n",k/x);
	    }
	    else{
	        printf("%d\n",n);
	    }
	}

}

