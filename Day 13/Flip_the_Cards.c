#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int n,x;
        scanf("%d %d",&n,&x);
        int c=n-x;
        if (x>c){
            printf("%d\n",n-x);
        }
        else{
            printf("%d\n",x);
        }
    }
}

