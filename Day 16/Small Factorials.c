#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,fact=1;
	    scanf("%d",&n);
	    for(int j=1;j<n+1;++j){
	        fact*=i;
	    }
	    printf("%d\n",fact);
	}

}

