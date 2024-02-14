#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    if(n<=4){
	        printf("1\n");
	    }
	    else if(n%4==0){
	        printf("%d\n",n/4);
	    }
	    else{
	        printf("%d\n",(n/4)+1);
	    }
	}

}

