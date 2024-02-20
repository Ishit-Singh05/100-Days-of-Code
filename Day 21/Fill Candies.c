#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        int n,k,m;
        scanf("%d %d %d",&n,&k,&m);
        if(n%(k*m)==0){
            printf("%d\n",n/(k*m));
        }
        else{
            printf("%d\n",n/(k*m)+1);
        }
    }
}

