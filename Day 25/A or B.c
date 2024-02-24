#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int c=500-(x*2)+1000-((x+y)*4);
	    int d=1000-(y*4)+500-((x+y)*2);
	    if(c>=d){
	        printf("%d\n",c);
	    }
	    else{
	        printf("%d\n",d);
	    }
	}

}

