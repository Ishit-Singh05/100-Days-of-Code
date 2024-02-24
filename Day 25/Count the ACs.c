#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int p;
	    scanf("%d",&p);
	    if(p%100<=(10-(p/100))){
	        printf("%d\n",(p%100)+(p/100));
	    }
	    else{
	        printf("-1\n");
	    }
	}

}

