#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    if(n%m==0){
	         int c=n/m;
	    if(c%2==0){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	    }else{
	        printf("No\n");
	    }
	   
	}

}

