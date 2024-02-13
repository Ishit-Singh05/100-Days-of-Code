#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>=b && a>=c){
	        printf("%d\n",a);
	    }
	    else if(b>=c && b>=a){
	        printf("%d\n",b);
	    }
	    else if(c>=a && c>=b){
	        printf("%d\n",c);
	    }
	}
}

