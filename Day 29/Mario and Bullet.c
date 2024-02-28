#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    int c=y/x;
	    if(c<=z){
	        printf("%d\n",z-c);
	    }
	    else{
	        printf("0\n");
	    }
	        
	}

}

