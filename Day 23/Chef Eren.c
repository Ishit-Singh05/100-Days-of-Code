#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;++i){
	    int n,a,b,X;
	    scanf("%d %d %d",&n,&a,&b);
	    X=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                X+=a;
            }
            else{
            X+=b;
            }
	    }
	    printf("%d\n",X);
    }
}

