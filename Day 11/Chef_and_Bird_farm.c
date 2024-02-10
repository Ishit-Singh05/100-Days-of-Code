#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(z%x==0 && z%y){
	        printf("Chicken\n");
	    }
	    else if(z%x!=0 && z%y==0){
	        printf("Duck\n");
	    }
	    else if(z%x==0 && z%y==0){
	        printf("Any\n");
	    }
	    else{
	        printf("None\n");
	    }
	}
    return 0;
}

