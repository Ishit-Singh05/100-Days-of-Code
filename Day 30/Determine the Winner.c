#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int a,b,c,d,x,y;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a>b)  x=a;
	    
	    else     x=b;
	   
	    if(c>d) y=c;
	        
	    else  y=d;
	    
	    if(x>y){
	        printf("Q\n");
	    }
	    else if(x<y){
	        printf("P\n");
	    }
	    else{
	        printf("Tie\n");
	    }
	    
	}

}

