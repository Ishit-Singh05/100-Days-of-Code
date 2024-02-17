#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n;
	    scanf("%d",&n);
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	     if(a>=b&&a>=c&&a>=d){
	          printf("%d\n",a);
	     }
	    else if(b>=c&&b>=d&&b>=a){
	        printf("%d\n",b);
	    }
	    else if(c>=a&&c>=b&&c>=d){
	        printf("%d\n",c);
	    }
	    else{
	         printf("%d\n",d);
	    }

	     
	    
	}

}

