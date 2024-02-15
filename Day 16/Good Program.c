#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n;
	    scanf("%d",&n);
	    if(n%4==0){
	        printf("Good\n");
	    }
	    else{
	        printf("Not Good\n");
	    }
	}
}

