#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        if(y%x==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
}

