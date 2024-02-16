#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int a,b;
	    int count=0;
	    scanf("%d %d",&a,&b);
	    for(int i=1;i<11;i++){
	         if(a+b+i==21){
	            printf("%d\n",i);
	            count=1;
	            break;
	         }
	    }
	    if(count==0){
	        printf("-1\n");
	    }
	}

}

