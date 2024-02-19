#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int w,x,y,z;
        scanf("%d %d %d %d",&w,&x,&y,&z);
        if(w==x||w==y||w==z||w==x+y+z||w==x+y||w==y+z||w==x+z){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}

