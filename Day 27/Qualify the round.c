#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int x,a,b;
	    scanf("%d %d %d",&x,&a,&b);
	    int c=a*1+b*2;
	    if(c>=x){
	        printf("Qualify\n");
	    }
	    else{
	        printf("NotQualify\n");
	    }
	}

}

