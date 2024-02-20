#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int x;
	    scanf("%d",&x);
	    if(x%10==0){
	        int c=x/10;
	        printf("%d\n",c);
	    }
	    else if(x%10!=0){
	        if(x%5==0){
	            printf("%d\n",x/10+(x%10)/5);
	        }
	        else {
	        printf("-1\n");
	        }
	    }
	}

}

