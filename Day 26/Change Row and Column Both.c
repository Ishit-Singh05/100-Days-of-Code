#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a!=c && b!=d){
	        printf("1\n");
	    }
	    else{
	        printf("2\n");
	    }
	}

}

