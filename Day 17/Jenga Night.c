#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,x;
	    scanf("%d %d",&n,&x);
	    if(x%n==0){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}

}

