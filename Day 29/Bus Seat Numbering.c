#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int n;
	    scanf("%d",&n);
	    if(n>=1 && n<=10){
	        printf("Lower Double\n");
	    }
	    else if(n>10 && n<=15){
	        printf("Lower Single\n");
	    }
	    else if(n>15 && n<=25){
	        printf("Upper Double\n");
	    }
	    else{
	        printf("Upper Single\n");
	    }
	}

}

